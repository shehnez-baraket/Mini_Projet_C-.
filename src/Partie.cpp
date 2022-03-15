#include "Partie.h"
#include<iostream>
#include <string>
using namespace std;

Partie::Partie(){}
void Partie::Saisir()
{
    int rep;
        cout<<"Saisir le type:"<<endl;
        cout<<"1 : Eliminatoire"<<endl;
        cout<<"2 : Huitieme"<<endl;
        cout<<"3 : quart"<<endl;
        cout<<"4 : Demi finale"<<endl;
        cout<<"5 : Troisieme place"<<endl;
        cout<<"6 : Finale"<<endl;
        cin>>rep;
        switch (rep)
        {
            case 1:
                type="Eliminatoire";
                break;
            case 2:
                type="Huitieme";
                break;
            case 3:
                type="quart";
                break;
            case 4:
                type="Demi finale";
                break;
            case 5:
                type="Troisieme place";
                break;
            case 6:
                type="Finale";
                break;
            default:
                type="Eliminatoire";
        }
        cout<<"**** La saisie du premier joueur ****"<<endl;
        Jou1.Saisir();
         cout<<"**** La saisie du deuxieme joueur ****"<<endl;
        Jou2.Saisir();
        cout<<"Saisir le score du Joueur1 puis celui du Joueur2 : "<<endl;
        cin>>ScoreJou1>>ScoreJou2;
}
void Partie::RemplirVectPartie()
{
    int nbPartie;
    cout<<"Saisir le nombre des parties"<<endl;
    cin>>nbPartie;
    for(int i=0;i<nbPartie;i++)
    {
        Partie pt;
        pt.Saisir();
        VectPart.push_back(pt);
    }
}
void Partie::AfficherPartie()
{
    cout<<"Le type de la partie est :"<<type<<endl;

    cout<<"**** L'affichage du premier joueur ****"<<endl;
    Jou1.AfficherJoueur();

    cout<<"**** L'affichage du deuxieme joueur ****"<<endl;
    Jou2.AfficherJoueur();
    cout<<" Le score du premier joueur est :"<<ScoreJou1<< " et le score du deuxieme joueur est : "<<ScoreJou2<<endl;
}
void Partie::AfficherVectPartie()
{
    cout<<"**** Affichage de tout les parties *****"<<endl;
    for(int i=0; i<VectPart.size(); i++)
    {
        VectPart[i].AfficherPartie();
    }

}
void Partie::AjouterPartie(int pos)
{
    Partie Ptr;
    Ptr.Saisir();
    VectPart.insert(VectPart.begin()+pos, Ptr);
}
void Partie::SupprimerPartie(int pos)
{
    if(pos<VectPart.size() || pos>0)
    {
        VectPart.erase(VectPart.begin()+pos);
    }
    else
    {
        cout<<" §§§§ Vous avez dépasser les limites"<<endl;
    }
}
void Partie::AfficherResultat()
{
    if(ScoreJou1>ScoreJou2)
    {
        cout<<"Le joueur 1 gagne avec une difference de :"<< ScoreJou1-ScoreJou2<<endl;
    }
    else
    if(ScoreJou1<ScoreJou2)
    {
        cout<<"Le joueur 2 gagne avec une difference de :"<< ScoreJou2-ScoreJou1<<endl;

    }
    else{
        cout<<"Les deux joueurs sont égaux "<< endl;

    }
}
void Partie::ChercherPartieParJoueur(int n)
{
    int i=0;
    while(i<VectPart.size() || VectPart[i].Jou1.getNumero()!=n || VectPart[i].Jou2.getNumero()!=n)
    {
        i++;
    }
    if(VectPart[i].Jou1.getNumero()== n)
    {
        Jou1.AfficherJoueur();
    }else
    if(VectPart[i].Jou2.getNumero()== n)
    {
         Jou2.AfficherJoueur();

    }
    else{
        cout<<"Le joueur n'existe pas dans les parties"<<endl;
    }
}
void Partie::ChercherPartieParType(string tp)
{
    for(int i=0; i<VectPart.size();i++)
    {
        if(VectPart[i].type == tp)
        {
            VectPart[i].AfficherPartie();
        }
    }
}
Partie::~Partie(){}
