#include <iostream>
using namespace std;
int frac(int x){
    int a = 1;
    for (int i = 1; i <= x; i++){
        a *= i ;
    }
    return a;
}

int main() {
    int n;
    int r;

    cout << "Enter the number of elements: " ;
    cin >> n;
    cout << "Enter the number of elements to permutate: " ;
    cin >> r;
    cout << "The combination is :" << frac(n) / frac(n-r)<<endl;


    return 0;
}