#include <iostream>
using namespace std;

class Point2D {
public:
    int x, y;

    void setCoordinates(int newX, int newY) {
        x = newX;
        y = newY;
    }

    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    void printCoordinates() {
        cout << "Coordinates: (" << x << ", " << y << ")" << endl;
    }

    void determineQuadrant() {
        if (x > 0 && y > 0) {
            cout << "The point is in the first quadrant" << endl;
        }
        else if (x < 0 && y > 0) {
            cout << "The point is in the second quadrant" << endl;
        }
        else if (x < 0 && y < 0) {
            cout << "The point is in the third quadrant" << endl;
        }
        else if (x > 0 && y < 0) {
            cout << "The point is in the fourth quadrant" << endl;
        }
        else {
            cout << "The point is on one of the axes or at the origin" << endl;
        }
    }
};

int main() {
    Point2D point;
    point.setCoordinates(3, 4);
    point.printCoordinates();
    point.determineQuadrant();

    point.move(-2, 5);
    point.printCoordinates();
    point.determineQuadrant();

    return 0;
}