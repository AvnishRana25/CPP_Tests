#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the Value of X:";
    cin >> x;
    if (x%5==0){
        cout << "X is divisible by 5";
    }
    if (x%7==0){
        cout << "X is divisible by 7"; 
    }
    else{
        cout << "X is not divisible by 5 or 7";

    }
    return 0;
    


}