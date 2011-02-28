
class Planeta{
private:
  //coordonate
  int x, y;
  int raza;
  int masa;
  int volum;
  User * detinator;
  int ID;
  int punctaj;
public:
  Planeta(void);
  ~Planeta(void);
  Planeta(int x, int y, int raza);
  void setUser(User * detinator);
  void setID(int ID);
  User * getUser();
  int getPunctaj();
  void setPunctaj(int punctaj);
};
