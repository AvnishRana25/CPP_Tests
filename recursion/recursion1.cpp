#include <iostream>
using namespace std;
void kill(int m){   //print 1 to n 
    if (m == 0) return;  //base case to exit if m = 0 
    cout << m << endl;
    kill(m-1);

}
int main() {
    int b ;
    cout << "Enter the Number: ";
    cin >> b;
    kill(b);
}