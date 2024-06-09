#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;   //taking input of number
    int rev = 0;   //reverse variable as zero
    while(n!=0){
        int ld;
        ld = n%10;   //storing last digit
        rev = rev*10 + ld;   //rev times 10 plus last digit 
        n = n/10;       //passing value of n to while loop
     }

     cout<<"The reversed number is:"<<rev<<endl;

}