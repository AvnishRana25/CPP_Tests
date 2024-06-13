#include <iostream>

using namespace std;

int main() {
  int n;

  // Prompt the user for input
  cout << "Enter a positive integer: ";
  cin >> n;

  // Check for invalid input (negative n)
  if (n <= 0) {
    cout << "Error: Please enter a positive integer." << endl;
    return 1;
  }

  // Create the array to store squares
  int squares[n];

  // Loop through natural numbers from 1 to n and calculate their squares
  for (int i = 0; i < n; i++) {
    squares[i] = (i + 1) * (i + 1); // Avoids potential overflow with large n
  }

  // Print the squares
  cout << "Squares of natural numbers till " << n << " are:" << endl;
  for (int i = 0; i < n; i++) {
    cout << squares[i] << " ";
  }
  cout << endl;

  return 0;
}
