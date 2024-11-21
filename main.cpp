#include <iostream>
#include "Point.h"
#include "Parcours.h"

int main() {
    Point p1(0.0, 0.0);
    Point p2(1.0, 1.0);
    Point p3(2.0, 2.0, 2.2);

    Parcours parcours;
    parcours.AjouterPoint(p1);
    parcours.AjouterPoint(p2);
    parcours.AjouterPoint(p3);

    parcours.AfficherCoordonnés();
    parcours.CalculerDistances();

    //Pour att l'utilisateur
    std::cin.get();
    return 0;
}
