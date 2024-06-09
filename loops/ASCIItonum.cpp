#include <iostream>
using namespace std;
int main(){
    char a = 'a';
    int i = int (a);
    cout << "The ASCII value is: " << i << endl;
    while (i<=122){
        cout << "The alphabet for ASCII Value " << i << " is: "<< char (i) << endl;
        i++;
    }
return 0;


}

