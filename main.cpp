#include "Masina_cu_remorca.hpp"

int main()
{

    int v1[3] = {1, 2, 3};
    int v2[3] = {4, 6, 5};
    Chestie_cu_Roti **Vehicule;
    Chestie_cu_Roti *V;
    
    Vehicule = new Chestie_cu_Roti *[10];

    Vehicule[0] = new Masina_cu_remorca("Miron Elena", 45, v1, 15, v2, "Peugeot", 60);
    Vehicule[1] = new Vehicul("Pardon Moise", 89);
    Vehicule[2] = new Remorca("Armata Anisoara", 67, 34, v2);
    Vehicule[3] = new Masina("Ortomad Manole", 56, v1, "Ferrari");
    Vehicule[4] = new Remorca("Romica Ene", 98, 23, v1);
    Vehicule[5] = new Masina_cu_remorca("Irimia Monica", 49, v1, 78, v2, "Nissan", 75);
    Vehicule[6] = new Masina("Podoaba Maria", 32, v2, "Mazda");

    for (int i = 0; i < 7; i++)
        Vehicule[i]->afisare();
    for (int i = 0; i < 6; i++)
        for (int j = i + 1; j < 7; j++)
            if (Vehicule[i]->getPret() > Vehicule[j]->getPret())
            {
                V = Vehicule[i];
                Vehicule[i] = Vehicule[j];
                Vehicule[j] = V;
            }
    cout << endl<< endl << "Se ordoneaza crescator in functie de pret si se afiseaza:\n\n ";
    for (int i = 0; i < 7; i++)
        Vehicule[i]->afisare();
    cout << "\n\n\nMasinile folosite spre impreunare/restituire:\n\n"; ////Chiar mi-as dori sa pot explica concret ce inseamna fiecare pe acest exemplu :)
     Masina_cu_remorca M1("Miron Elena",45,v1,15,v2,"Peugeot",60);
     Masina_cu_remorca M2("Irimia Monica", 49,v1,78,v1,"Nissan",75);
     Masina_cu_remorca M;
     M1.afisare();
     M2.afisare();
     cout<<endl;
     if(M1<M2)
       cout<<"A doua masina este mai grea. ";
    else if(M1>M2)
       cout<<"Prima masina este mai grea. ";
    else
       cout<<"Cele doua masini au aceeasi masa";
    cout<<endl;
    cout << "\nIMPREUNAREEEE:\n";
    M=M1+M2;
     M.afisare();
    cout<<"\nRESTITUIRE:\n";
    M=M1-M2;
    M.afisare();
    
    for(int i=0;i<7;i++)
       delete Vehicule[i];
    delete[] Vehicule;

    return 0;
}