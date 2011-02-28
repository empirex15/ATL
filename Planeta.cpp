
#include<math.h>
  
  Planeta::Planeta(void){
  }
  Planeta::~Planeta(void){
  }
  Planeta::Planeta(int x, int y, int raza){
    Planeta::x = x;
    Planeta::y = y;
    Planeta::raza = raza;
    Planeta::volum = (4*3.14*pow(Planeta::raza,3))/3;
    Planeta::detinator = NULL;
  }
  void Planeta::setUser(User * detinator){
    Planeta::detinator = detinator;
  }
  void Planeta::setID(int ID){
    Planeta::ID = ID;
  }
  User * Planeta::getUser(){
    return Planeta::detinator;
  }
  int Planeta::getPunctaj(){
    return Planeta::punctaj;
  }
  void Planeta::setPunctaj(int punctaj){
    Planeta::punctaj = punctaj;
  }
