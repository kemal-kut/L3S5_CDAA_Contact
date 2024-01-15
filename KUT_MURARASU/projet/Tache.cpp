#include "Tache.h"

#include <iostream>


Tache::Tache(string c,string d){
    setContenu(c);
    setDateTache(d);
}

Tache::~Tache(){}

string Tache::getContenu() const{return contenu;}
string Tache::getDateTache() const{return dateTache;}
string Tache::getDateCreation() const{return dateCreation;}
int Tache::getId() const{return id;}

void Tache::setContenu(const string c){contenu=c;}
void Tache::setDateTache(const string d){dateTache=d;}
void Tache::setDateCreation(const string d){dateCreation = d;}
void Tache::setId(const int i){id = i;}


ostream& operator<<(ostream& os, const Tache& t)
{
    os << "@todo " << t.getContenu() << " @date " << t.getDateTache()<<endl;
    return os;
}
