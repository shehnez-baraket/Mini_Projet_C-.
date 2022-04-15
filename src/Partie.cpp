#include "Partie.h"
#include<iostream>
#include <string>
#include<ostream>
#include<fstream>
using namespace std;

void Partie::creer(fstream& f)
{
    f.open("fichierParties.txt", ios::in |ios::out |ios ::trunc);
    if(!f.is_open()) exit(-1);
}
void Partie::remplir(fstream& f)
{
    int nbElt;
    Partie pt;
    cout<<"donner le nombre d'élément que vous souhaitez ajouter à notre fichier"<<endl;
    cin>>nbElt;
    for(int i=0; i<nbElt; i++)
    {
        cout<<"Saisie d'une partie"<<endl;
        cin>>pt;
        f<<pt<<endl;
    }
}
void Partie::afficher(fstream& f)
{
    char ch[100];
    f.seekg(0); // le curseur se positionne au début du fichier
    while(1)
    {
        f.getline(ch,100);
        if(f.eof()) break;
        cout<<ch<<endl;
    }
}
ostream& operator<< (ostream& out, Partie& part)
{
    out<<"Le type de la partie est :"<<part.type<<endl;

    out<<"**** L'affichage du premier joueur ****"<<endl;
    out<<part.Jou1;

    out<<"**** L'affichage du deuxieme joueur ****"<<endl;
    out<<part.Jou2;
    out<<" Le score du premier joueur est :"<<part.ScoreJou1<< " et le score du deuxieme joueur est : "<<part.ScoreJou2<<endl;
    return out;
}

istream& operator>> (istream& in, Partie& part)
{
    int rep;
        cout<<"Saisir le type:"<<endl;
        cout<<"1 : Eliminatoire"<<endl;
        cout<<"2 : Huitieme"<<endl;
        cout<<"3 : quart"<<endl;
        cout<<"4 : Demi finale"<<endl;
        cout<<"5 : Troisieme place"<<endl;
        cout<<"6 : Finale"<<endl;
        in>>rep;
        switch (rep)
        {
            case 1:
                part.type="Eliminatoire";
                break;
            case 2:
                part.type="Huitieme";
                break;
            case 3:
                part.type="quart";
                break;
            case 4:
                part.type="Demi finale";
                break;
            case 5:
                part.type="Troisieme place";
                break;
            case 6:
                part.type="Finale";
                break;
            default:
                part.type="Eliminatoire";
        }
        cout<<"**** La saisie du premier joueur ****"<<endl;
        in>>part.Jou1;
         cout<<"**** La saisie du deuxieme joueur ****"<<endl;
        in>>part.Jou2;
        cout<<"Saisir le score du Joueur1 puis celui du Joueur2 : "<<endl;
        in>>part.ScoreJou1>>part.ScoreJou2;
}

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
    string msg="";
    try{
        int nbPartie;
        cout<<"Saisir le nombre des parties"<<endl;
        cin>>nbPartie;
        if(nbPartie<0) throw msg;
        for(int i=0;i<nbPartie;i++)
        {
        Partie pt;
        pt.Saisir();
        VectPart.push_back(pt);
        }
    }catch(string msg){
        cout<<"Erreur!! nombre inferieur a zero"<<endl;
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
void Partie::AfficherResultat(int i)
{

    if(VectPart[i].ScoreJou1>VectPart[i].ScoreJou2)
    {
        cout<<"Le joueur 1 gagne avec une difference de :"<< ScoreJou1-ScoreJou2<<endl;
    }
    else
    if(VectPart[i].ScoreJou1<VectPart[i].ScoreJou2)
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
void Partie::ChercherPartieParNom(string n)
{
    for(int i=0; i<VectPart.size();i++)
    {
        if(VectPart[i].Jou1.getNom() == n || VectPart[i].Jou1.getNom() == n)
        {
            VectPart[i].AfficherPartie();
        }
        else{
            cout<<"Le joueur n'existe pas!"<<endl;
        }
    }
}
Partie::~Partie(){}
