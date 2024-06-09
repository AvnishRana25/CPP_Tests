#include <iostream>
using namespace std;
int main(){
    int n;
    int prod = 1;
    cout<< "Enter the number:";
    cin>>n;
    while(n!=0){
        int ld;
        ld = n%10;
        prod *= ld;
        n = n/10;
     }
     cout<<"The product of the digits is:"<<prod<<endl;
     

}