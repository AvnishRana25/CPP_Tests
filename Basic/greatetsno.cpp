#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter three numbers"<<endl;
    cin>>a>>b>>c;
    if (a>b && a>c){
        cout<<a<<" is the greatest number"<<endl;
    }
    else if (b>a && b>c){
        cout<<b<<" is the greatest number"<<endl;
    }
    else if (c>a && c>b){
        cout<<c<<" is the greatest number"<<endl;
    }
    else{
        cout<<" all the numbers are equal"<<endl;
    }
 return 0;
    
}