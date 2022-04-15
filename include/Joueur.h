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
        int niveau;
        vector <Joueur> VectJou;

    public:
        Joueur(); // cbon
        int getNumero(){return numero;}
        string getNom(){return nom;}
        void Saisir(); // cbon
        void Remplir(); // cbon
        void AfficherJoueur(); // cbon
        void AfficherVect();// cbon
        void Supprimer(int); // cbon
        void Ajouter(); // permet l'ajout à la fin , cbon
        void Ajouter(int); // permet l'ajout a une position donnée , cbon
        void Rechercher(int); //cbon
        void TotalJoueur(); // cbon
        friend ostream& operator<< (ostream&, Joueur&);
        friend istream& operator>> (istream&, Joueur&);
        ~Joueur();
};

#endif // JOUEUR_H

