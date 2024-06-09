#include <iostream>
using namespace std;
int main(){
    int n;
    int count= 0 ;
    cout<<"Enter the number you want to count the digits of:";
    cin>>n;
    while(n!=0){
        int num;
        num=n%10;
        count = count + num ;
        n=n/10;
    }
    
    cout<<"The sum of digits is: "<<count<<endl;
}