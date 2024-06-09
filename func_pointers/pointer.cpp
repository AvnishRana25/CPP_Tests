#include <iostream>
using namespace std;
int main(){
    int x;
    int* ptr = &x ;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "The value of x is " << x << endl;   //value of x
    cout << "The address of x is " << ptr << endl;  //address using pointer
    cout << "The value of x using pointer is " << *ptr << endl;  //using pointer 

    *ptr = 23;
    cout << "The new value of x is: " << x << endl;
    cout << "the new value of x using pointer is: " << *ptr << endl;   //using pointer
    return 0;

}