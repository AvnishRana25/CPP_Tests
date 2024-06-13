//count the elemets in given a given array which are greater than the given x.

#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int count = 0;
    int arr[5]  = {1,2,4,7,8};
    for (int i = 0; i < 5 ; i++) {
        if (arr[i] > x){
            count += 1;
        }
        else continue;
    }


    std::cout << "The no of elements greater than" << x << " is: " << count ; 

}
    

