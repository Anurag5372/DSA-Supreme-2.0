//Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
       int p=i+1;
        for(j=1;j<i+2;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}