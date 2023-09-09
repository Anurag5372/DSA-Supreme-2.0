// hollow square pattern

#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int n ;
    cin >> n ;
    cout << endl;
    for(int row =0 ; row < n ;row++ ){
        for(int col =0;col<n;col++){
            if((row== 0 || row == (n-1)) ){
                cout << "* ";
        }
        else{
            if ( col ==0 || col == (n-1))
                cout << "* ";
            else 
                cout << "  ";    

        }
            
    }
    cout<<endl;

    
}
}