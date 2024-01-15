#ifndef INTERACTION_H
#define INTERACTION_H

//#include "dateheure.h"
#include "Tache.h"

#include <string>
#include <vector>

using namespace std;

class Interaction
{
private:
    string contenu;
    string dateCreation;
    string dateModif;
    int id;

    vector<Tache> lTaches;

public:
    //Constructeurs et Destructeur
    Interaction(const string);
    ~Interaction();

    //Accesseurs et Modificateurs
    string getContenu() const;
    string getDateCreation() const;
    string getDateModif() const;
    int getId() const;
    vector<Tache> getlTaches() const;
    Tache& getTache(int);

    void setContenu(const string);
    void setDateCreation(const string);
    void setDateModif(const string);
    void setId(const int);

    //Méthodes
    void ajouterTache(Tache&);
    friend ostream& operator<<(ostream &, const Interaction&);
};

#endif // INTERACTION_H
