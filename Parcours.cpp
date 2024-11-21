#include "Parcours.h"
#include <iostream>

void Parcours::AjouterPoint(const Point& point) {
    points.push_back(point);
    //le push back c pour ajouter a la fin
}

void Parcours::AfficherCoordonnés(){
    //on vas regarder tout les points
    for (const auto& point : points) {
        if (point.getZ() != 0.0) {
            std::cout << "Point 3D : (" << point.getX() << ", " << point.getY() << ", " << point.getZ() << ")" << std::endl;
        } else {
            std::cout << "Point 2D : (" << point.getX() << ", " << point.getY() << ")" << std::endl;
        }
    }
}

void Parcours::CalculerDistances(){
    //cacul la distance entre tout les points
    for (size_t i = 0; i < points.size() - 1; ++i) {
        double distance = points[i].CalculerDistances(points[i + 1]);
        std::cout << "Distance entre les points " << i << " et " << i + 1 << " : " << distance << std::endl;
    }
}