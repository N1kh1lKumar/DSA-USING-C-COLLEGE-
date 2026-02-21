#include<iostream>
using namespace std;

void paternPrint(int n){
 
 for(int i = 1; i<=n; i++){
//space
    for(int j= 1; j<=n-i; j++){
        cout << " ";
    }

//stars
    cout << "*";

//spaces
    if(i > 1){
        for(int j = 1; j<=2*i-3; j++){
            cout << " ";
        }
        cout << "*";
    }
        cout << "\n";
 }


 for(int i = n-1; i>=1; i--){
    //space
    for(int j= 1; j<=n-i; j++){
        cout << " ";
    }

//stars
    cout << "*";

//spaces
    if(i > 1){
        for(int j = 1; j<=2*i-3; j++){
            cout << " ";    
        }
        cout << "*";
    }
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