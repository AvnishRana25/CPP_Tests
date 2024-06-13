#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number of elements in arrays: ";
    cin >> num;
    int arr[num];
    int ind;
    for (int i = 0; i < num; i++){
        cout << "Enter the Element at index " << ind << ": ";
        cin >> ind ;
        arr[i] = ind;
    }

    cout << "The array printed is: " ;
    for (int j = 0; j <= num; j++){
        cout << arr[j] << " " ;
    }
    cout << endl;
    cout << "The array printed in reverse is: " ;
    for (int j = num; j <= 0; j--){
        cout << arr[j] << " " ;
    }


}


