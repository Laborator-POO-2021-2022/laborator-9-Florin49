#ifndef REMORCA
#define REMORCA

#include "Vehicul.hpp"


class Remorca: virtual public Vehicul
{
 protected:
    int greutate_maxima;
    int dimensiuni[3];
 public:
    Remorca();
    Remorca(const char*, int, int, int[3] );
    ~Remorca();
    Remorca& operator=(const Remorca&);
    // int getGM();
    void afisare();
    // int getLungime();
    // int getLatime();
    // int getInaltime();

};


#endif