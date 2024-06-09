// * * * * 
// * * * *
// * * * *
// * * * *

#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout<< "Enter the number of Rows: ";
    cin >> r;
    cout<< "Enter the number of Columns: ";
    cin >> c;
    for (int i = 0 ; i<r ; i++){
        for (int j = 0 ; j<c ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}

