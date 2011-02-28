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

int main(void){
	struct sockaddr_in local, rmt;
	char buf[100];
	int sockfd, confd;
	socklen_t rlen;
	sockfd = socket(PF_INET, SOCK_STREAM, 0);
	set_addr(&local, NULL, INADDR_ANY, PORT_SERVER);
	bind(sockfd,(struct sockaddr *)&local, sizeof(local));
	listen(sockfd,1);
	rlen = sizeof(rmt);
	confd = accept(sockfd, (struct sockaddr *)&rmt, &rlen);
	while(1){
		read(confd,buf,100);
		printf("%s", buf);
		strcpy(buf,"Mesajul a ajuns la server !");
		write(confd,buf,100);
	}
	close(confd);
	close(sockfd);
	return 0;
}
