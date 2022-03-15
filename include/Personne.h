#ifndef PERSONNE_H
#define PERSONNE_H
using namespace std;
#include<string>
#include<Date.h>

class Personne
{
    protected:
        string nom;
        string prenom;
        Date date_Naiss;
    public:

        Personne(string="", string="", Date= Date(2,01,2000));
        void Saisir();
        void Afficher();
        ~Personne();

};

#endif // PERSONNE_H
