#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(double x, double y);
    Point(double x, double y, double z);

    double getX() const;
    double getY() const;
    double getZ() const;

    double CalculerDistances(const Point& other);

private:
    double x;
    double y;
    double z;
    bool is3D;
};

#endif