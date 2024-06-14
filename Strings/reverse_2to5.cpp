// input a string of length greater than 5 and reverse the character between 2 to 5 using in built functions 

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string reverse_length(string x ){
    
    reverse(x.begin() + 2, x.begin() + 5);

    
    return x; 
}

int main() {
    string input_str;
    cout << "Enter a string: ";
    getline(cin, input_str);

    string reversed;

    if (input_str.size() > 5 ){
        reversed = reverse_length(input_str);
    }
    cout << "Reversed string from position 2 ot 5 : " << reversed << endl;

    return 0;
}
