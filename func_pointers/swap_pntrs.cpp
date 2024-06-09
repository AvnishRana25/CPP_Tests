#include <iostream>
using namespace std;
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
    int a;
    int b;
    cout << "Enter the First number :" ;
    cin >> a;
    cout << "Enter the Second number :" ;
    cin >> b;
    swap(&a,&b);
    cout << "The new value of x is;" << a << endl;
    cout << "The new value of y is;" << b << endl;
    return 0;

}