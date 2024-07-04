#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    int x, y;

public:
    void getPoint() {
        cout << "Enter the coordinates x and y: " << endl;
        cin >> x >> y;
    }

    void displayPoint() const {
        cout << "The coordinates are: " << x << " and " << y << endl;
    }

    float distance( Point p2)  {
        return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
    }
};

int main() {
    Point p1;
    p1.getPoint();
    p1.displayPoint();

    Point p2;
    p2.getPoint();
    p2.displayPoint();

    cout << "The distance between p1 and p2 is: " << p1.distance(p2) << endl;
    return 0;
}
