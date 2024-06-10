#include <iostream>
using namespace std;
int pwr(int n, int z){        //power of a to b
    if (z == 0 ) return 1;
    if (n == 0 ) return 0;
    if (z == 1 ) return n;
    return n * pwr(n, z-1);
    }
    

int main() {
    int a,b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a power: ";
    cin >> b;
    cout << pwr(a,b) << endl;
    return 0;
}