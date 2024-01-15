#include "GestionContact.h"
#include <ostream>

using namespace std;

GestionContact::GestionContact(){}
GestionContact::~GestionContact(){}

vector<Contact> GestionContact::getlContacts() const{return lContacts;}

void GestionContact::ajouterContact(Contact c)
{
    lContacts.push_back(c);
}



void GestionContact::ajouterInteraction(string nom, string prenom, Interaction i, GestionInteraction& gi)
{
    //Interaction i((contenuI);

    for( int c= 0; c<lContacts.size(); c++)
        if(lContacts[c].getNom()==nom && lContacts[c].getPrenom()==prenom)
        {
            lContacts[c].ajouterInteraction(i);
            gi.ajouterInteraction(i);
        }
}


void GestionContact::ajouterTache(string nom, string prenom, int i, Tache t, GestionInteraction& gi, GestionTache& gt)
{
   // Tache t(contenu, date);

    for(int c=0; c<lContacts.size(); c++){
        if(lContacts[c].getNom()==nom && lContacts[c].getPrenom()==prenom)
        {
            Interaction& ic = lContacts[c].getInteractionI(i);
            ic.ajouterTache(t);
            int iId = ic.getId();
            gi.ajouterTache(iId, t);
            gt.ajouterTache(t);
        }
    }
}

void GestionContact::supprimerContact(string nom, string prenom, GestionInteraction& gi, GestionTache& gt)
{
    for(int c=0; c<lContacts.size(); c++)
    {
        if(lContacts[c].getNom()==nom && lContacts[c].getPrenom()==prenom)
        {
            for(int i=0; i<lContacts[c].getlInteractions().size();i++)
            {
                Interaction& ic = lContacts[c].getInteractionI(i);
                int iId = ic.getId();
                gi.supprimerInteraction(iId,gt);
            }
            lContacts.erase(lContacts.begin()+c);
        }
    }
}


void GestionContact::supprimerContact(Contact contactASupp)
{
    for(int c=0; c<lContacts.size(); c++)
    {
        if(lContacts[c].getNom()== contactASupp.getNom() && lContacts[c].getPrenom()== contactASupp.getPrenom())
        {
            lContacts.erase(lContacts.begin()+c);
        }
    }
}


ostream& operator<<(ostream& os, const GestionContact& gc)
{
    for(auto c:gc.getlContacts())
        os << c << endl;
    return os;
}

