#include<iostream>
using namespace std;



void patternPrint(int n){

 for(int i = 1; i<=n; i++){
    //stars
    for(int j = 0; j<i; j++ ){
        cout << "*";
    }

    //spaces
    for(int j = 0; j<2*(n-i); j++){
        cout << " ";
    }

    //stars
    for(int j = 0; j<i; j++ ){
        cout << "*";
    }
    cout << "\n";
 }


for(int i = 0; i<n; i++){
    //stars
    for(int j = 0; j<n-i; j++ ){
        cout << "*";
    }

    //spaces
    for(int j = 0; j<2*(i); j++){
        cout << " ";
    }

    //stars
    for(int j = 0; j<n-i; j++ ){
        cout << "*";
    }
    cout << "\n";





}

}



int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    patternPrint(n);
    return 0;
}