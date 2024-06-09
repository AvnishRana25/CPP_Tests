// * * * *
// * * * 
// * * 
// *

#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout<< "Enter the number of Rows: ";
    cin >> r;
    cout<< "Enter the number of Columns: ";
    cin >> c;
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= r+1-i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}