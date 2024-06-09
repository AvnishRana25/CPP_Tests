//Floyd's triangle

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                a[i][j]=i+1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i][j-1];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}