#include "Date.h"
#include <iostream>
using namespace std;
ostream& operator<< (ostream& out, Date& d)
{
    out<<d.jour<<'/'<<d.mois<<'/'<<d.annee<<endl;
    return out;
}
istream& operator>> (istream& in, Date& d)
{
    in>>d.jour>>d.mois>>d.annee;
    return in;
}
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
