#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string reverse_even_length(string x , int n ){
    if ( n % 2 == 0 || x.length() == n ){
        reverse(x.begin(), x.end());
    }      
    return x; 
}

int main() {


    string input_str;
    cout << "Enter a string: ";
    getline(cin, input_str);

    int n; 
    cout << "Enter an even number: ";
    cin >> n;

    string reversed = reverse_even_length(input_str , n );
    cout << "Reversed string (if even length): " << reversed << endl;

    return 0;
}
