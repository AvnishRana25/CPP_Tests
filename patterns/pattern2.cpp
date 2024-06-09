// 1 2 3 4 
// 1 2 3 4 
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
        
    for (int i = 1 ; i <= r ; i++){       // runs the column loop for 4 times with endl and prints themselves
        for (int j = 1; j <= c ; j++){   //runs columns with 1 2 3 4 values and prints them out
            cout << j << " ";
        }
    cout << endl;     // necessary for printing patern in differnet lines
    
    }
return 0;

}

