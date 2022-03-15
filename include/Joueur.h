#ifndef JOUEUR_H
#define JOUEUR_H
#include<vector>
#include<Date.h>
using namespace std;
#include<string>

class Joueur
{
    private:
        string nom;
        string prenom;
        Date date_Naiss;
        int numero;
        vector <Joueur> VectJou;

    public:
        Joueur(); // cbon
        int getNumero(){return numero;}
        void Saisir(); // cbon
        void Remplir(); // cbon
        void AfficherJoueur(); // cbon
        void AfficherVect();// cbon
        void Supprimer(int); // cbon
        void Ajouter(); // permet l'ajout � la fin , cbon
        void Ajouter(int); // permet l'ajout a une position donn�e , cbon
        void Rechercher(int); //cbon
        void TotalJoueur(); // cbon
        ~Joueur();
};

#endif // JOUEUR_H

