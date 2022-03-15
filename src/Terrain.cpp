#include "Terrain.h"
#include<iostream>
using namespace std;
Terrain::Terrain(){}
void Terrain::saisir()
{
    cout<<"**** Donner le nombre de place dans ce terrain : ****"<<endl;
    cin>>nbPlace;
    CapaciteMax=nbPlace;
}
void Terrain::Afficher()
{
    cout<<" le nombre de place de ce terrain est : "<< nbPlace<< " et la capacite maximale est : "<<CapaciteMax<<endl;
}
void Terrain::ModifierCapaciteMax(int cpm)
{
    CapaciteMax=cpm;
}
Terrain::~Terrain(){}
