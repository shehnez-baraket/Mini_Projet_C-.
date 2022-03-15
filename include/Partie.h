#ifndef PARTIE_H
#define PARTIE_H
#include<Joueur.h>

class Partie
{
    private:
        string type;
        Joueur Jou1;
        Joueur Jou2;
        int ScoreJou1;
        int ScoreJou2;
        vector<Partie> VectPart;


    public:
        Partie();
        void Saisir(); // cbon
        void RemplirVectPartie(); //cbon
        void AfficherPartie(); //cbon
        void AfficherVectPartie(); //cbon
        void AjouterPartie(int ); //cbon
        void SupprimerPartie(int); //cbon
        void AfficherResultat(); //cbon
        void ChercherPartieParType(string); // cbon
        void ChercherPartieParJoueur(int); //cbon

        virtual ~Partie();

    protected:


};

#endif // PARTIE_H
