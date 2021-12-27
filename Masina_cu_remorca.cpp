#include "Masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca():Vehicul(),Remorca(),Masina(),masa_totala(0)
{

}

Masina_cu_remorca::Masina_cu_remorca(const char* prop,int p, int d[3],int gm, int dim[3],const char* m, int mt):
Vehicul(prop,p),Remorca(prop,p,gm,d),Masina(prop,p,dim,m),masa_totala(mt)
{

}
Masina_cu_remorca::~Masina_cu_remorca()
{

}

void Masina_cu_remorca::afisare()
{
    cout<<endl;
    cout<<"Proprietarul masinii cu remorca: "<<proprietar;
    cout<<endl<<"Pretul masinii cu remorca: "<<pret<<endl;
    cout<<"Marca masinii: "<<marca<<endl;
    cout<<"Dimensiunile masinii sunt:\n";
    cout<<"-Lungime: "<<Masina::dimensiuni[0]<<"m"<<endl;
    cout<<"-Latime: "<<Masina::dimensiuni[1]<<"m"<<endl;
    cout<<"-Inaltime: "<<Masina::dimensiuni[2]<<"m"<<endl;
    cout<<"Greutatea maxima a remorcii: "<<greutate_maxima<<"m"<<endl;
    cout<<"Dimensiunile remorcii sunt:\n";
    cout<<"-Lungime: "<<Remorca::dimensiuni[0]<<"m"<<endl;
    cout<<"-Latime: "<<Remorca::dimensiuni[1]<<"m"<<endl;
    cout<<"-Inaltime: "<<Remorca::dimensiuni[2]<<"m"<<endl;
}
Masina_cu_remorca& Masina_cu_remorca::operator=(const Masina_cu_remorca& M)
{
   (Vehicul&)(*this)=(Vehicul&)M;
   (Masina&)(*this)=(Masina&)M;
   (Remorca&)(*this)=(Remorca&)M;
   this->masa_totala=M.masa_totala;
   return *this;
}
bool Masina_cu_remorca::operator <(const Masina_cu_remorca& M)
{
    if(this->masa_totala<M.masa_totala)
          return true;
    return false;
}
bool Masina_cu_remorca::operator >(const Masina_cu_remorca& M)
{
    if(this->masa_totala>M.masa_totala)
          return true;
    return false;
}
Masina_cu_remorca operator+(Masina_cu_remorca& M1,Masina_cu_remorca& M2)
{
    char *prop=strdup(M1.proprietar);
    int pret=M1.pret+M2.pret;
    int dr[3]={M1.Remorca::dimensiuni[0]+M2.Remorca::dimensiuni[0] , M1.Remorca::dimensiuni[1]+M2.Remorca::dimensiuni[1] , M1.Remorca::dimensiuni[2]+M2.Remorca::dimensiuni[2]};
    int gm=M1.greutate_maxima+M2.greutate_maxima;
    int dm[3]={M1.Masina::dimensiuni[0]+M2.Masina::dimensiuni[0] , M1.Masina::dimensiuni[1]+M2.Masina::dimensiuni[1] , M1.Masina::dimensiuni[2]+M2.Masina::dimensiuni[2]};
    char *m=strdup(M1.marca);
    int mt=M1.masa_totala+M2.masa_totala;
    Masina_cu_remorca M(prop,pret,dr,gm,dm,m,mt);
    return M;
}
Masina_cu_remorca operator-( Masina_cu_remorca& M1,Masina_cu_remorca& M2)
{
   
    char *prop=strdup(M2.proprietar);
    int pret=M1.pret-M2.pret;
    int dr[3]={M1.Remorca::dimensiuni[0]-M2.Remorca::dimensiuni[0] , M1.Remorca::dimensiuni[1]-M2.Remorca::dimensiuni[1] , M1.Remorca::dimensiuni[2]-M2.Remorca::dimensiuni[2]};
    int gm=M1.greutate_maxima+M2.greutate_maxima;
    int dm[3]={M1.Masina::dimensiuni[0]-M2.Masina::dimensiuni[0] , M1.Masina::dimensiuni[1]-M2.Masina::dimensiuni[1] , M1.Masina::dimensiuni[2]-M2.Masina::dimensiuni[2]};
    char *m=strdup(M1.marca);
    int mt=M1.masa_totala-M2.masa_totala;
    Masina_cu_remorca M(prop,pret,dr,gm,dm,m,mt);
    return M;
    
}