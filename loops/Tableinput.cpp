#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number whose table you want to print:" << endl;   //printing to take input 
    cin >> n; //taking input from user
    for(int i=1;i<=10;i++){  //loop from 1 to 10 
        cout << n << " * " << i << " = " << n*i << endl;   // multiplying the number by loop
    }
    return 0;
}