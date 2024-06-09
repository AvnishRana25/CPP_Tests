#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin >> a;
    for (int i=2; i<a; i++){
        if (a%i==0){
            cout<<"Composite Number ";

        }
        else {
            cout<<"Prime Number ";

        }
        
    }
        
return 0;
}
