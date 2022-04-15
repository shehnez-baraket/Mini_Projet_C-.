#ifndef DATE_H
#define DATE_H
using namespace std;
#include<iostream>
#include<ostream>
class Date
{
private:
    int jour;
    int mois;
    int annee;
public:

    Date(int=10, int=01, int=1999);
    void Saisir();

    void setJour(int j){jour=j;}
    int getJour(){return jour;}

    void setMois(int m){mois=m;}
    int getMois(){return mois;}

    void setAnnee(int a){annee=a;}
    int getAnnee(){return annee;}

    void Afficher();
    friend ostream& operator<< (ostream&, Date&);
    friend istream& operator>> (istream&, Date&);
    ~Date();





};

#endif // DATE_H
