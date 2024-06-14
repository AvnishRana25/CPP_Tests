#include <iostream>
using namespace std;
int main(){
    string strx;
    getline(cin, strx);
    int n = strx.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(strx[i] == 'a' || strx[i] == 'e' || strx[i] == 'i' || strx[i] == 'o' || strx[i] == 'u'){{
            count++;
        }
    }
}