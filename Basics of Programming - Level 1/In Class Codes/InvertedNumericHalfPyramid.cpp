/*
12345
1234
123
12
1
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int row =0;row<n;row++){
        for (int col= 0 ;col<=(n-row-1);col++){
            cout << col+1;
        }
        cout<<endl;
    }
}