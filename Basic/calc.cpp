#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the First Number"<<endl;
    cin>>n1;
    cout<<"Enter the Second Number"<<endl;
    cin>>n2;
    char op;
    cout<<"Enter the Operator"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<n1+n2;
        break;
        case '-':
        cout<<n1-n2;
        break;
        case '*':
        cout<<n1*n2;
        break;
        case '/':
        cout<<n1/n2;
        break;
        default:
        cout<<"Invalid operator"<<endl; 
    }
return 0;

}