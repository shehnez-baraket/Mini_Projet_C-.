#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int j, int m, int a)
{
    jour=j;
    mois=m;
    annee=a;
}
void Date::Saisir()
{
    cout<<" Saisir la date de naissance : Jour, Mois, Annee"<<endl;
    cin>> jour>>mois>> annee;
}
void Date::Afficher()
{
    cout<<"la date est :"<< jour<< "/" <<mois<<"/" <<annee<<endl;
}
Date::~Date()
{
}
