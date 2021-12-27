#include "Masina.hpp"


Masina::Masina():Vehicul(),marca(NULL)
{
   dimensiuni[0]=dimensiuni[2]=dimensiuni[1]=0;
}
Masina::Masina(const char* prop, int p,int d[3],const char* m):Vehicul(prop,p)
{
   dimensiuni[0]=d[0];
   dimensiuni[1]=d[1];
   dimensiuni[2]=d[2];
//    if(marca!=NULL)
//        delete[] marca;
   marca=new char[strlen(m)+1];
   strcpy(marca,m);
}
Masina::~Masina()
{
    delete[] marca;
}
// int Masina::getLungime()
// {
//     return dimensiuni[0];
// }
// int Masina::getLatime()
// {
//     return dimensiuni[1];
// }
// int Masina::getInaltime()
// {
//     return dimensiuni[2];
// }
// char* Masina::getMarca()
// {
//     return marca;
// }
void Masina::afisare()
{
    cout<<endl;
    cout<<"Proprietarul masinii: "<<proprietar;
    cout<<endl<<"Pretul masinii: "<<pret<<endl;
    cout<<"Marca masinii: "<<marca<<endl;
    cout<<"Dimensiunile sale sunt:\n";
    cout<<"-Lungime: "<<dimensiuni[0]<<"m"<<endl;
    cout<<"-Latime: "<<dimensiuni[1]<<"m"<<endl;
    cout<<"-Inaltime: "<<dimensiuni[2]<<"m"<<endl;
    
}
Masina& Masina::operator=(const Masina& M)
{
    (Vehicul&)(*this)=(Vehicul&)(M);
    this->dimensiuni[0]=M.dimensiuni[0];
    this->dimensiuni[1]=M.dimensiuni[1];
    this->dimensiuni[2]=M.dimensiuni[2];
    this->marca=strdup(M.marca);
    return *this;
}