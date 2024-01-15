#include <iostream>

#include "GestionTache.h"

GestionTache::GestionTache(){}

GestionTache::~GestionTache(){}


vector<Tache> GestionTache::getlTaches() const{return lTaches;}


void GestionTache::ajouterTache(Tache& t)
{
    lTaches.push_back(t);
}

void GestionTache::supprimerTache(int id)
{
    for(int t=0; t<lTaches.size(); t++)
        if( lTaches[t].getId()== id)
            lTaches.erase(lTaches.begin()+ t);
}


ostream& operator<<(ostream& os, const GestionTache& gt)
{
    for(auto t:gt.getlTaches())
        os << t << endl;
    return os;
}

