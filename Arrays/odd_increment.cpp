#include <iostream>

using namespace std;

int main() {
    int arr[5]  = {1,2,4,7,8};
    for (int i = 0; i < 5 ; i++) {
        if (i % 2 == 0){
            arr[i] = arr[i] * 2;
        }
        else arr[i] =  arr[i] + 10 ; 
    }


    std::cout << "The Array is: " ; 
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

  return 0;
}