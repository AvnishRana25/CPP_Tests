#include <iostream>
using namespace std;
void sum(int i, int j){
    cout<<i+j<<endl;
}

int main(){
    int k;
    int m;
    cout << " Enter the First number :" ;
    cin >> k;
    cout << " Enter the Second number :" ;
    cin >> m;


    sum(k,m);
    return 0;
}