#ifndef MASINA_CU_REMORCA
#define MASINA_CU_REMORCA

#include "Masina.hpp"
#include "Remorca.hpp" 

class Masina_cu_remorca: public Masina, public Remorca
{
protected:
    int masa_totala;
public:
    Masina_cu_remorca();
    Masina_cu_remorca(const char*,int, int[3], int, int[3], const char*,int);
    ~Masina_cu_remorca();
    void afisare();
    Masina_cu_remorca& operator=(const Masina_cu_remorca&);
    friend Masina_cu_remorca operator+( Masina_cu_remorca&, Masina_cu_remorca&);
    friend Masina_cu_remorca operator-( Masina_cu_remorca&, Masina_cu_remorca&);
    bool operator <(const Masina_cu_remorca&);
    bool operator >(const Masina_cu_remorca&);
};


#endif