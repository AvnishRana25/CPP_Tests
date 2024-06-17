#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char arr[90];
    cout << "Enter the details to enter : ";
    cin.getline(arr, 90);

    int ok = 0;
    cout << "1. For writing into file "<<endl;
    cout << "2. For reading the file"<<endl;
    cout << "3. For appending the file"<<endl;
    cout << "Enter your choice: ";

    cin >> ok;

    if (ok == 1){
        ofstream fout("MyResults.txt");
        fout << arr << endl;
        cout << "Written successfully." << endl;
        fout.close();
    }

    else if (ok == 2){
        char arr1[100];
        ifstream fin("MyResults.txt");
        fin.getline(arr1, 100);
        cout << arr1 << endl;
        cout << "Read successfully!"<< endl;
        fin.close();
    }
    if (ok == 3){
        ofstream fout("MyResults.txt", ios::app);
        fout << arr << endl;
        cout << "Appended successfully." << endl;
        fout.close();
    }
}