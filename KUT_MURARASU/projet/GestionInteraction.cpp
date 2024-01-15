#include <iostream>
#include "GestionInteraction.h"

GestionInteraction::GestionInteraction(){}
GestionInteraction::~GestionInteraction(){}

vector<Interaction> GestionInteraction::getlInteractions() const{return lInteractions;}


void GestionInteraction::ajouterInteraction(Interaction &i)
{
    lInteractions.push_back(i);
}


void GestionInteraction::ajouterTache(int id, Tache& t)
{
    for(int i=0; i < lInteractions.size(); i++)
    {
        if(lInteractions[i].getId()==id)
        {
            lInteractions[i].ajouterTache(t);
        }
    }
}


void GestionInteraction::supprimerInteraction(int id, GestionTache& gt)
{
    for(int i=0; i<lInteractions.size();i++)
    {
        if(lInteractions[i].getId()==id)
        {
            for(int t=0; t<lInteractions[i].getlTaches().size(); t++)
            {
                Tache& ti = lInteractions[i].getTache(t);
                int tId = ti.getId();
                gt.supprimerTache(tId);
            }
            lInteractions.erase(lInteractions.begin()+i);
        }
    }
}



ostream& operator<<(ostream& os, const GestionInteraction& gi)
{
    for(auto i:gi.getlInteractions())
        os << i << endl;
    return os;
}

