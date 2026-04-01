#include <iostream>

using std::cout;
using std::endl;

 namespace sumA {
    int add(int a, int b) {
        return a + b;
    }
}

namespace sumB {
    long add(long a, long b) {
        return a + b; 
    }
}

int main() {
    cout << sumA::add(10, 20) << endl;
    cout << sumB::add(123456789L, 987654321L) << endl;
    cout << sumA::add(2, 3) << endl;
    cout << sumB::add(2000000000L, 200000000L) << endl;
    return 0;              
}

