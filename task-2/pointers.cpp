#include <iostream>
using namespace std;

int main()
{
    int num = 50;

    // Using a pointer to store address of num
    int *ptr = &num;

    // Printing value using pointer
    cout << "Value of num using pointer: " << *ptr << endl;

    // Changing value to ‘100’ using pointer
    *ptr = 100;

    // new value of num
    cout << "New value of num: " << num << endl;

    return 0;
}