#include "Remorca.hpp"

Remorca::Remorca():greutate_maxima(-2),Vehicul()
{
   dimensiuni[0]=dimensiuni[2]=dimensiuni[1]=0;
}
Remorca::Remorca(const char* prop, int p,int gm,int v[3] ):greutate_maxima(gm),Vehicul(prop,p)
{
    dimensiuni[0]=v[0];
    dimensiuni[1]=v[1];
    dimensiuni[2]=v[2];
}
Remorca::~Remorca()
{
    
}
// int Remorca::getLungime()
// {
//     return dimensiuni[0];
// }
// int Remorca::getLatime()
// {
//     return dimensiuni[1];
// }
// int Remorca::getInaltime()
// {
//     return dimensiuni[2];
// }
void Remorca::afisare()
{
    cout<<endl;
    cout<<"Proprietarul remorcii: "<<proprietar;
    cout<<endl<<"Pretul remorcii: "<<pret<<endl;
    cout<<"Greutatea maxima a remorcii: "<<greutate_maxima<<"m"<<endl;
    cout<<"Dimensiunile sale sunt:\n";
    cout<<"-Lungime: "<<dimensiuni[0]<<"m"<<endl;
    cout<<"-Latime: "<<dimensiuni[1]<<"m"<<endl;
    cout<<"-Inaltime: "<<dimensiuni[2]<<"m"<<endl;
}
// int Remorca::getGM()
// {
//   return greutate_maxima;
// }
Remorca& Remorca::operator=(const Remorca& R)
{
    (Vehicul&)(*this)=(Vehicul&)(R);
    this->dimensiuni[0]=R.dimensiuni[0];
    this->dimensiuni[1]=R.dimensiuni[1];
    this->dimensiuni[2]=R.dimensiuni[2];
    this->greutate_maxima=R.greutate_maxima;
    return *this;
}