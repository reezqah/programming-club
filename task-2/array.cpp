#include <iostream>
using namespace std;

int main()
{
    // Create an array of 5 integers
    int arr[5] = {1, 2, 3, 4, 5};

    // 1. Normal for loop
    cout << "Using normal for loop:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    // 2. For-each loop 
    cout << "Using for-each loop:" << endl;
    for (int value : arr)
    {
        cout << value << endl;
    }

    return 0;
}





