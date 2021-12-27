#ifndef VEHICUL
#define VEHICUL

#include "Chestie_Cu_Roti.hpp"


class Vehicul: public Chestie_cu_Roti 
{
 protected:
   char *proprietar;
   int pret;
 public:
     Vehicul();
     Vehicul(const char*,int);
     ~Vehicul();
     Vehicul& operator=(const Vehicul&);
    int getPret();
    void afisare();
    // char* getProprietar();
};

#endif