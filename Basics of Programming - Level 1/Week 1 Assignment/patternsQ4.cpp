// hollow full pyramid

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number of rows: "; 
    int n;
    cin>>n;
    for(int row =0 ; row < n ; row++){
        for( int col =0 ; col < n -row-1;col++){
            cout << "  ";
        }
        for( int col =0 ; col < ((row*2) +1);col++){ 
            cout << "* ";
        }    
        cout<<endl;
    }
}
