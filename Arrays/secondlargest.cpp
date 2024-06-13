#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / 4;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        mx = max(arr[i], mx);
        
    }
    int smx = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i]!= mx) {
            smx = max(smx, arr[i]); 
        
    }
    }
    cout << "The second maximum number in the Array is: " << smx << endl;
}