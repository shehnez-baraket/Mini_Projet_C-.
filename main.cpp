#include <iostream>
#include<Personne.h>
#include<Joueur.h>
#include<Terrain.h>
#include <Partie.h>
#include<fstream>
using namespace std;

int main()
{

    fstream f;
    Partie::creer(f);
    Partie::remplir(f);
    Partie::afficher(f);








    /*cout<<"BIENVENUE DANS NOTE CHAMPIONNAT DE TENNIS "<<endl;
    Partie pt;
    string nom;
    int rep;
    while(1){
        cout<<"****    MENU    ****:"<<endl;
        cout<<"  1 : Saisir les parties"<<endl;
        cout<<"  2 : Afficher les parties"<<endl;
        cout<<"  3 : Ajouter une partie"<<endl;
        cout<<"  4 : Supprimer les parties"<<endl;
        cout<<"  5 : Afficher le résultat d'une partie"<<endl;
        cout<<"  6 : Chercher une partie par le nom de joueur"<<endl;
        cout<<"  7 : Quitter"<<endl;
        cin>>rep;
        switch (rep)
        {
            case 1:
                pt.RemplirVectPartie();
                break;
            case 2:
                pt.AfficherVectPartie();
                break;
            case 3:
                try{
                    int i;
                    cout<<"Donner la position d'ajout"<<endl;
                    cin>>i;
                    if(i>pt.VectPart.size() || i<0) throw -1;
                    pt.AjouterPartie( i);
                }catch(int i)
                {
                cout<<"Position errone!!"<<endl;
                }

                break;
            case 4:
                try{
                    int i;
                    cout<<"Donner la position de suppression"<<endl;
                    cin>>i;
                    if(i>pt.VectPart.size() || i<0) throw -1;
                    pt.SupprimerPartie( i);
                }catch(int i)
                {
                cout<<"Position errone!!"<<endl;
                }

                break;
            case 5:
                try{
                    int i;
                    cout<<"Donner la position "<<endl;
                    cin>>i;
                    if(i>pt.VectPart.size() || i<0) throw -1;
                    pt.AfficherResultat(i);
                }catch(int i)
                {
                cout<<"Position erroné!!"<<endl;
                }


                break;
            case 6:

                cout<<"Donner le nom du joueur que vous cherchez!"<<endl;
                cin>>nom;
                pt.ChercherPartieParNom(nom);
                break;
            case 7:
                exit(0);
                break;
            default:
               pt.RemplirVectPartie();
}

}*/}

