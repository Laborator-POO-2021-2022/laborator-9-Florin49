#ifndef MASINA
#define MASINA

#include "Vehicul.hpp"


class Masina: virtual public Vehicul
{
 protected:   
    int dimensiuni[3];
    char *marca;
 public:
    Masina();
    Masina(const char*, int,int[3],const char*);
    ~Masina();
    Masina& operator=(const Masina&);
    // int getLungime();
    // int getLatime();
    // int getInaltime();
    void afisare();
    // char* getMarca();
};
#endif