#include <iostream>
using namespace std;

// creating struct
struct Rectangle
{
    int width;
    int breadth;
};

int main()
{
    // Creating rectangle called r1
    Rectangle r1;

    r1.width = 5;
    r1.breadth = 2;

    int area = r1.width * r1.breadth;

    cout << "Area of rectangle: " << area << endl;

    return 0;
}

