#include <iostream>
using namespace std;
void swap(int&x , int&y ){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int n ; 
    cout << "Enter First Number:";
    cin >> n ;
    int m ;
    cout << "Enter Second Number:";
    cin >> m; 
    swap(n,m);
    cout << "First New Number is : " << n << endl;
    cout << "Second New Number is : " << m << endl;
    return 0;
}
    
  
