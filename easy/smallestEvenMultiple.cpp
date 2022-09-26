#include <iostream>

using namespace std;

int smallestEvenMultiple(int n) {
    int m = 1;
    int res = n * m;
    for(int i = 0; res % 2 != 0; i++) {
        m++;
        res *= m;
    }
    return res;
}

int main() {
    cout << smallestEvenMultiple(7) << endl;
    return 0;
}