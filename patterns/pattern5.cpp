// 1 
// 1 2
// 1 2 3 
// 1 2 3 4 

#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout<< "Enter the number of Rows: ";
    cin >> r;
    cout<< "Enter the number of Columns: ";
    cin >> c;
    for (int i = 1 ; i<=r ; i++){
        for (int j = 1 ; j<=i ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    
}