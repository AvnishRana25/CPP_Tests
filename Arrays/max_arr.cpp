#include <iostream>
using namespace std;

void maxarr(int arr[] , int n ) {
    int mx = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    cout << "The maximum number in the Array is: " << mx << endl;
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
    maxarr(arr , num);

}





