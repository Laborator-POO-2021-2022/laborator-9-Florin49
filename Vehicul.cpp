#include "Vehicul.hpp"

Vehicul::Vehicul():proprietar(NULL),pret(0)
{

}
Vehicul::Vehicul(const char* prop,int p):pret(p)
{
//    if(proprietar!=NULL)
//       delete[] proprietar;
   proprietar=new char[strlen(prop)+1];
   strcpy(proprietar,prop);
}
Vehicul::~Vehicul()
{
    delete[] proprietar;
}
int Vehicul::getPret()
{
    return this->pret;
}
// char* Vehicul::getProprietar()
// {
//    return this->proprietar;
// }
void Vehicul::afisare()
{
    cout<<endl;
    cout<<"Proprietarul vehicului: "<<proprietar;
    cout<<endl<<"Pretul vehicului: "<<pret<<endl;
}
Vehicul& Vehicul::operator=(const Vehicul& V)
{
    if(this->proprietar!=NULL)
      delete[] this->proprietar;
    this->proprietar=strdup(V.proprietar);
    this->pret=V.pret;
    return *this;
}
