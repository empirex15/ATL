
  
  User::User(void){
  }
  User::~User(void){
  }
  void User::moveShips(Planeta * source, Planeta * destination, int number_of_ships){
    if(source->getUser() == this){
      if(destination->getUser() == this){
	source->setPunctaj(source->getPunctaj() - number_of_ships);
	destination->setPunctaj(source->getPunctaj() + number_of_ships);
      }else{
	if(destination->getPunctaj() < numeber_of_ships){
	  destination->setPunctaj(number_of_ships - destination->getPunctaj());
	}
      }
    }
  }
