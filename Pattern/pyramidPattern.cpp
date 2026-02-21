#include<iostream>
using namespace std;

void paternPrint(int n){
 
    for(int i = 1; i<=n; i++){
        
     //spaces
        for(int j = 0; j<n-i; j++)
            cout << " ";

    //numbers
        for(int j = 0; j<i; j++ ){
        cout << j+1 ;
    }

    if(i > 1){
        for(int j = i-1; j>0; j-- ){
            cout << j ;
        }
    }

    
    //spaces
    for(int j = 0; j<n-i; j++)
            cout << " ";
    
    cout << "\n";




}
}


int main(){

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    paternPrint(n);
    return 0;
}