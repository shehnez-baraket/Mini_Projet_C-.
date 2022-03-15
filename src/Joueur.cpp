#include "Joueur.h"
#include <iostream>
using namespace std;

Joueur::Joueur(){}

void Joueur::Saisir()
{
    cout<<"** Donner le nom et le prenom: **"<<endl;
    cin>> nom>> prenom;
    cout<<"** Donner la date de naissance: **"<<endl;
    date_Naiss.Saisir();
    cout<<"** Donner le numero du joueur: **"<<endl;
    cin>>numero;
}

void Joueur::Remplir()
{
    int nbJ;
    do
    {
        cout<<"***** Merci de taper le nombre de joueurs *****"<<endl;
        cin>>nbJ;
    }while(nbJ>32 || nbJ<0);

     cout<<"**** Remplissage des Joueurs ****"<<endl;
     for(int i=0; i<nbJ;i++)
     {
         Joueur J;
         J.Saisir();
         VectJou.push_back(J);
     }
}

void Joueur::AfficherJoueur()
{

   cout<<"Nom : "<<nom<<" ,prenom : "<<prenom<<" ,ne(e) le : "<<date_Naiss.getJour()<<"/"<<date_Naiss.getMois()<<"/"<<date_Naiss.getAnnee()<<" ,a le numero : "<< numero<<endl;
}

void Joueur::AfficherVect()
{
    cout<<"**** Affichage de tout les joueurs *****"<<endl;
    for(int i=0; i<VectJou.size(); i++)
    {
        VectJou[i].AfficherJoueur();
    }
}

void Joueur::Ajouter()
{
    Joueur Jr;
    Jr.Saisir();
    VectJou.push_back(Jr);

}

void Joueur::Ajouter(int ind)
{
    Joueur Jr;
    Jr.Saisir();
    VectJou.insert(VectJou.begin()+ind, Jr);
}

void Joueur::Supprimer(int pos)
{
    if(pos<VectJou.size() || pos>0)
    {
        VectJou.erase(VectJou.begin()+pos);
    }
    else
    {
        cout<<" §§§§ Vous avez dépasser les limites"<<endl;
    }
}

void Joueur::Rechercher(int id)
{
   int i=0;

    while (i<VectJou.size() && VectJou[i].numero!=id)
    {
        i++;
    }
    if(VectJou[i].numero== id)
    {
        VectJou[i].AfficherJoueur();
    }
    else
    {
        cout<<" §§§§§ Le Joueur n'existe pas §§§§"<<endl;
    }
}

void Joueur::TotalJoueur()
{
    cout<<" Le total des joueurs est : "<<VectJou.size()<<endl;
}

Joueur::~Joueur(){}
