#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "Enter the number of elements in the array: ";
  cin >> num;

  if (num <= 0) {
    cout << "Error: Array size must be positive." << endl;
    return 1;
  }

  int arr1[num];

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < num; i++) {
    cin >> arr1[i];
  }

  cout << "The original array: ";
  for (int i = 0; i < num; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;

  int arr2[num];
  for (int i = 0; i < num; i++) {
    arr2[i] = arr1[num - i - 1];
  }

  cout << "The reversed array: ";

  for (int i = 0; i < num; i++) {
    cout << arr2[i] << " ";
  }
  

  return 0;
}
