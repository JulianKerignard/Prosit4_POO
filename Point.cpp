#include "Point.h"
#include <cmath>

//const 2D si is3D = faux et donc z = 0
Point::Point(double x, double y) : x(x), y(y), z(0.0), is3D(false) {}

//const 3d si is33D = vrai
Point::Point(double x, double y, double z) : x(x), y(y), z(z), is3D(true) {}

//getter X/Y/Z
double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getZ() const { return z; }


//calcule la distance euclidienne (la fameuse)
double Point::CalculerDistances(const Point& other){
    double dx = x - other.x;
    double dy = y - other.y;
    double dz = is3D ? z - other.z : 0.0;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}