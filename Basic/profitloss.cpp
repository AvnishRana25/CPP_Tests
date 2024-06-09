#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the Cost Price: ";
    cin >> a;
    cout << "Enter the Selling Price:" ;
    cin >> b;
    if (b-a>0){
        cout << "Profit:"<< a-b<<endl;
    }
    if (b-a<0){
        cout << "Loss:"<< a-b<<endl;
    }
    return 0;
}