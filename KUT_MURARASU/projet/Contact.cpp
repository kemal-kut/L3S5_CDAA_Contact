#include "Contact.h"

using namespace std;
#include <string>
#include <iostream>

//Constructeur par défaut
Contact::Contact(){}
//Constructeur par défaut, il faut au moins un nom et un prenom pour créer un Contact
Contact::Contact(const string &n, const string &p, const string &e, const string &m,const string &t, const string &url, const string &dc, const string &dm)
{
    setNom(n);
    setPrenom(p);
    setEntreprise(e);
    setMail(m);
    setTel(t);
    setPhoto(url);
    setDateCreation(dc);
    setDateModif(dm);
}
Contact::~Contact(){}


string Contact::getNom() const{return nom;}
string Contact::getPrenom() const{return prenom;}
string Contact::getEntreprise() const{return entreprise;}
string Contact::getMail() const{return mail;}
string Contact::getTel() const{return tel;}
string Contact::getPhoto() const{return urlPhoto;}
string Contact::getDateCreation() const{return dateCreation;}
string Contact::getDateModif() const{return dateModif;}

vector<Interaction> Contact::getlInteractions() const{return linteractions;}
Interaction& Contact::getInteractionI(int i){return linteractions[i];}

void Contact::setNom(const string &n){nom = n;}
void Contact::setPrenom(const string &p){prenom = p;}
void Contact::setEntreprise(const string &e){entreprise = e;}
void Contact::setMail(const string &m){mail = m;}
void Contact::setTel(const string &t){tel = t;}
void Contact::setPhoto(const string &url){urlPhoto = url;}
void Contact::setDateCreation(const string &d){dateCreation = d;}
void Contact::setDateModif(const string &d){dateModif = d;}


void Contact::ajouterInteraction(Interaction& i)
{
    linteractions.push_back(i);
}


ostream& operator<<(ostream &os, const Contact& c)
{
    os << c.nom << " " << c.prenom << endl; //<< "Date de création de la fiche contact : " << c.dateCreation << endl;

    vector<Interaction> li = c.getlInteractions();
    for(int n = 0; n< li.size();n++)
    {
        os << "Interaction n. " << n << "\n" << li[n] << endl;
    }
    return os;
}
