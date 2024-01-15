#ifndef GESTIONTACHE_H
#define GESTIONTACHE_H


#include "Tache.h"
#include <vector>

class GestionTache
{
private:
    vector<Tache> lTaches;

public:
    GestionTache();
    ~GestionTache();

    vector<Tache> getlTaches() const;

    void ajouterTache(Tache& t);
    void supprimerTache(int);

    friend ostream& operator<<(ostream&, const GestionTache &);
};

#endif // GESTIONTACHE_H
