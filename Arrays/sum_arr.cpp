#include <iostream>
using namespace std;

void sumarr(int arr[] , int & num ) {
    int count = 0;
    int * p = & num;
    for (int i = 0; i < *p; i++) {
        count += arr[i];
    }
    cout << "The sum of the array is: " << count << endl;
}
int main(){
    int num;
    cout << "Enter the number of elements in arrays: ";
    cin >> num;
    int arr[num];
    int ind;
    for (int i = 0; i < num; i++){
        cout << "Enter the Element: " ;
        cin >> ind ;
        arr[i] = ind;
    }

    int choice = 0;
    cout << "(1) for printing sum of number of array : " << endl;
    cout << "Your choice is: " ;
    cin >> choice;
    if (choice == 1){
        sumarr(arr, num);
        }
    else 
    cout << "Invalid choice" << endl;

}





