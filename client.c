#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/stat.h>
#include<netinet/in.h>
#include<fcntl.h>
#include "netio.c"

#define PORT_SERVER 6100
#define ADRESA_SERVER "192.168.0.193"

int main(void){
	char buf[100];
	struct sockaddr_in local, rmt;
	int sockfd;
	sockfd = socket(PF_INET,SOCK_STREAM,0);
	set_addr(&local, NULL, INADDR_ANY, 0);
	bind(sockfd, (struct sockaddr *)&local, sizeof(local));
	set_addr(&rmt,ADRESA_SERVER, 0, PORT_SERVER);
	connect(sockfd,(struct sockaddr *)&rmt, sizeof(rmt));
	while(1){
		fgets(buf,99,stdin);
		write(sockfd, buf, 100);
		read(sockfd,buf,100);
		printf("%s\n", buf);
	}
	close(sockfd);
	return 0;
}
