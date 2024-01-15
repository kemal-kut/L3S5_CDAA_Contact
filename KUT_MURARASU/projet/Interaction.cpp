#include <iostream>
#include "Interaction.h"

Interaction::Interaction(const string c)
{
    setContenu(c);
    //setDateHeure();
}
Interaction::~Interaction(){}

string Interaction::getContenu() const{return contenu;}
string Interaction::getDateCreation() const{return dateCreation;}
string Interaction::getDateModif() const{return dateModif;}
int Interaction::getId() const{return id;}
vector<Tache> Interaction::getlTaches() const{return lTaches;}
Tache& Interaction::getTache(int i){return lTaches[i];}

void Interaction::setContenu(const string c){contenu = c;}
void Interaction::setDateCreation(const string d){dateCreation = d;}
void Interaction::setDateModif(const string d){dateModif = d;}
void Interaction::setId(const int i){id = i;}


void Interaction::ajouterTache(Tache& t)
{
    lTaches.push_back(t);
}


ostream& operator<<(ostream &os, const Interaction& i)
{
    os << i.getContenu() << endl;
    for(auto t:i.getlTaches())
        os << t << endl;
    return os;
}
