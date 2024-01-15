#ifndef GESTIONINTERACTION_H
#define GESTIONINTERACTION_H

#include "Interaction.h"
#include "GestionTache.h"

#include <vector>

class GestionInteraction
{
private:
    vector<Interaction> lInteractions;
public:
    GestionInteraction();
    ~GestionInteraction();

    vector<Interaction> getlInteractions() const;

    void ajouterInteraction(Interaction& i);
    void ajouterTache(int, Tache& t);
    void supprimerInteraction(int id, GestionTache&);

    friend ostream& operator<<(ostream&, const GestionInteraction&);
};
#endif // GESTIONINTERACTION_H
