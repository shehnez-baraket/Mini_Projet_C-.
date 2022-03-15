#include "Personne.h"
#include<iostream>

Personne::Personne(string n, string p, Date d): nom(n), prenom(p), date_Naiss(d)
{

}
void Personne::Afficher()
{
    cout<<"Affichage des informations d'une personne"<<endl;
    cout<<nom<<" "<<prenom<<endl;
    date_Naiss.Afficher();
}
void Personne::Saisir()
{
    cout<<"Donner le nom et le prenom:"<<endl;
    cin>> nom>> prenom;
    cout<<"Donner la date de naissance"<<endl;
    date_Naiss.Saisir();

}
Personne::~Personne()
{
    //dtor
}
