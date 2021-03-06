#include "Joueur.h"
#include <iostream>
using namespace std;
ostream& operator<< (ostream& out, Joueur& Jou)
{
    out<<"Nom : "<<Jou.nom<<" ,prenom : "<<Jou.prenom<<" ,ne(e) le : "<<Jou.date_Naiss.getJour()<<"/"<<Jou.date_Naiss.getMois()<<"/"<<Jou.date_Naiss.getAnnee()<<" ,a le numero : "<< Jou.numero<<" ,est le niveau : "<< Jou.niveau<<endl;
    return out;
}

istream& operator>> (istream& in, Joueur& Jou)
{
    cout<<"** Donner le nom et le prenom: **"<<endl;
    in>> Jou.nom>> Jou.prenom;
    cout<<"** Donner la date de naissance: **"<<endl;
    in>>Jou.date_Naiss;
    cout<<"** Donner le numero du joueur: **"<<endl;
    in>>Jou.numero;
    cout<<"** Donner le niveau du joueur: **"<<endl;
    in>>Jou.niveau;
}

Joueur::Joueur(){}

void Joueur::Saisir()
{
    cout<<"** Donner le nom et le prenom: **"<<endl;
    cin>> nom>> prenom;
    cout<<"** Donner la date de naissance: **"<<endl;
    date_Naiss.Saisir();
    cout<<"** Donner le numero du joueur: **"<<endl;
    cin>>numero;
    cout<<"** Donner le niveau du joueur: **"<<endl;
    cin>>niveau;
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

   cout<<"Nom : "<<nom<<" ,prenom : "<<prenom<<" ,ne(e) le : "<<date_Naiss.getJour()<<"/"<<date_Naiss.getMois()<<"/"<<date_Naiss.getAnnee()<<" ,a le numero : "<< numero<<" ,est le niveau : "<< niveau<<endl;
}

void Joueur::AfficherVect()
{
    cout<<"**** Affichage de tous les joueurs *****"<<endl;
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
        cout<<" ???? Vous avez d?passer les limites"<<endl;
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
        cout<<" ????? Le Joueur n'existe pas ????"<<endl;
    }
}

void Joueur::TotalJoueur()
{
    cout<<" Le total des joueurs est : "<<VectJou.size()<<endl;
}

Joueur::~Joueur(){}
