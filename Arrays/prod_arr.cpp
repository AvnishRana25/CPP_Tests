#include <iostream>
using namespace std;

void prodarr(int arr[] , int num ) {
    int prod = 1;
    for (int i = 0; i < num; i++) {
        prod *= arr[i];
    }
    cout << "The product of the array is: " << prod << endl;
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
    cout << "(1) for printing product of number of array : " << endl;
    cout << "Your choice is: " ;
    cin >> choice;
    if (choice == 1){
        prodarr(arr, num);
        }
    else 
    cout << "Invalid choice" << endl;

}





