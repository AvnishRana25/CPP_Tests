// 1 3 5 7
// 1 3 5
// 1 3 
// 1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number:" ;
    cin >> n;
    for (int i = 1; i <=n; i=i+2){
        for (int j = 1; j<=n-i-1; j=j+2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;

}
