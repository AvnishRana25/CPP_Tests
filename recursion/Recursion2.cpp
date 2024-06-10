#include <iostream>
using namespace std;


void kill(int m){      //print n to 1
    if (m == 0 ) return;    
    kill(m-1);   //recursive call to kill function
    cout << m << endl;
    
}

int main() {
    int b ;
    cout << "Enter the Number: ";
    cin >> b;
    kill(b);
}
