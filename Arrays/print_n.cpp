#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number of elements in arrays: ";
    cin >> num;
    int arr[num];
    int ind;
    for (int i = 0; i < num; i++){
        cout << "Enter the Element at index " << i << ": ";
        cin >> ind ;
        arr[i] = ind;
    }
    int n;
    cout << "Enter the number to print: " ;
    cin >> n;

    cout << "The array printed is: " ;
    for (int j = 0; j < n; j++){
        cout << arr[j] << " " ;

    }
}


