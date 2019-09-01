#ifndef POINT2D_H
#define POINT2D_H

#include <string>

class Point2d{
    double x;
    double y;
    
    public:
        Point2d();
        Point2d(double x, double y);
        Point2d(const Point2d& other);
        ~Point2d();
        std::string toString();
        void movePoint(double x1, double y1);
        void movePoint(const Point2d& other);
        double getX() const;
        double getY() const;
        bool equals(const Point2d& other);
        Point2d normalVector(const Point2d& p2);
        double distance(Point2d& p2);
        Point2d getPointFromPointAndDistance(const Point2d& p2, double distance);
        Point2d multiplyVectorAndScalar(double scalar);
        // Overload + operator to add two Points2d objects.
        Point2d operator+(const Point2d& other) {
            Point2d ans;
            ans.x = this->x + other.x;
            ans.y = this->y + other.y;
            return ans;
        }                  
};

#endif