#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of sequence you want to generate: ";
    cin >> n;
    cout << "The sequence you want to generate is:";
    for (int i=1; i<=n; i=i+2){
        cout << i << " ";
        
    }
return 0;

}