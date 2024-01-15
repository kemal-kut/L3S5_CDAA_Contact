#ifndef TACHE_H
#define TACHE_H


//#include "dateheure.h"
#include <string>

using namespace std;

class Tache{
private:
    //attributs
    string contenu;
    string dateTache;
    string dateCreation;
    int id;

public:
    //Constructeurs et Destructeur
    Tache(string, string);
    ~Tache();

    //Accesseurs et Modificateurs
    string getContenu() const;
    string getDateTache() const;
    string getDateCreation() const;
    int getId() const;

    void setContenu(string);
    void setDateTache(string);
    void setDateCreation(string);
    void setId(int);

    //Méthodes
    friend ostream& operator<<(ostream &, const Tache &);
};

#endif // TACHE_H
