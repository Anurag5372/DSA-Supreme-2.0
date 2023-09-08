/*
Pattern
1
23
345
4567
*/
/* r0 - 1
   r1 - 2 
   r2 - 3
   r3 - 4
*/ 


// Debug the code. It is trying to print the given pattern.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=0;
    while (i<n){
        int j = 0;
        int range = i+1;
        int count = i+1;
        while (j<range){
            cout << count;
            count++;
            j++;
        }
        i++;
        cout<< endl;
    }
}