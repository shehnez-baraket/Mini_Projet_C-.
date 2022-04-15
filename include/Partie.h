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



    public:
        vector<Partie> VectPart;
        Partie();
        void Saisir(); // cbon
        void RemplirVectPartie(); //cbon
        void AfficherPartie(); //cbon
        void AfficherVectPartie(); //cbon
        void AjouterPartie(int ); //cbon
        void SupprimerPartie(int); //cbon
        void AfficherResultat(int); //cbon
        void ChercherPartieParType(string); // cbon
        void ChercherPartieParJoueur(int); //cbon
        void ChercherPartieParNom(string); //cbon
        friend ostream& operator<< (ostream&, Partie&);
        friend istream& operator>> (istream&, Partie&);
        static void creer(fstream&);
        static void remplir(fstream&);
        static void afficher(fstream&);

        virtual ~Partie();

    protected:


};

#endif // PARTIE_H
