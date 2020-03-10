// #ifndef POINT_H
// #define POINT_H

class Point {
    private:
        double _x;
        double _y;
        
    public:
        // constructors have the same name of the class and no return type
        // default constructor
        Point();

        // parameterized constructor
        Point(double, double);

        // getters
        double getX();
        double getY();
        
        // setters
        void setX(double);
        void setY(double);

        // other functions
        double distance_from_origin();
};

// #endif