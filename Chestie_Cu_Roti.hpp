#ifndef CHESTIE_CU_ROTI
#define CHESTIE_CU_ROTI


#include <iostream>
#include <cstring>
using namespace std;

class Chestie_cu_Roti
{
 public:  
    virtual void afisare()=0;
    virtual int getPret()=0;
    virtual ~Chestie_cu_Roti()=0;
    ///virtual char* getProprietar()=0;
    
};

#endif