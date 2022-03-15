#ifndef TERRAIN_H
#define TERRAIN_H


class Terrain
{
    private:
        int nbPlace;
        int CapaciteMax;

    public:
        Terrain();
        void saisir();
        void Afficher();
        void ModifierCapaciteMax(int);
        void setNbPlace(int nbp){ nbPlace=nbp;}
        int getNbPlace(){ return nbPlace;}
        ~Terrain();


};

#endif // TERRAIN_H
