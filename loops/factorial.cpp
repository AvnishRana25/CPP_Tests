#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number; ";
    cin >> num;
    int fac = 1 ;
    for (int i=1; i<=num; i++){
        fac = fac * i;
    }
    cout << "Factorial is " << fac << endl;
return 0;
}

    




    


