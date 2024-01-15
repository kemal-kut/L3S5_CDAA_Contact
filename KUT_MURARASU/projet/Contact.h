#ifndef CONTACT_H
#define CONTACT_H

#include "Interaction.h"
#include <string>
using namespace std;

class Contact
{
private:
    string nom;
    string prenom;
    string entreprise;
    string mail;
    string tel;
    string urlPhoto;
    string dateCreation;
    string dateModif;
    vector<Interaction> linteractions;

public:
    //Constructeur et Destructeur
    Contact();
    Contact(const string &nom, const string &prenom, const string &entreprise, const string &mail, const string &tel, const string &urlphoto, const string &dateCreation, const string &dateModif);
    ~Contact();

    //Accesseurs et Modificateurs
    string getNom() const;
    string getPrenom() const;
    string getEntreprise() const;
    string getMail() const;
    string getTel() const;
    string getPhoto() const;
    string  getDateCreation() const;
    string getDateModif() const;
    vector<Interaction> getlInteractions() const;
    Interaction& getInteractionI(int);

    void setNom(const string &);
    void setPrenom(const string &);
    void setEntreprise(const string &);
    void setMail(const string &);
    void setTel(const string &);
    void setPhoto(const string &);
    void setDateCreation(const string &);
    void setDateModif(const string &);

    void ajouterInteraction(Interaction &i);
    friend ostream& operator<<(ostream &, const Contact&);
};

#endif // CONTACT_H
