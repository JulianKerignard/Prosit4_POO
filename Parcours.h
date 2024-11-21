#ifndef PARCOURS_H
#define PARCOURS_H

#include <vector>
#include "Point.h"

class Parcours {
public:
    void AjouterPoint(const Point& point);
    void AfficherCoordonnés();
    void CalculerDistances();

private:
    std::vector<Point> points;
};

#endif // PARCOURS_H