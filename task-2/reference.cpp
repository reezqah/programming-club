#include <iostream>
using namespace std;

int main() {
    int x = 25;        
    int& ref = x;   // Creating reference variable for x


    ref = 80;      // Using the reference to change x to 80

    // Printing x
    cout << "Value of x = " << x << endl;

    return 0;
}
