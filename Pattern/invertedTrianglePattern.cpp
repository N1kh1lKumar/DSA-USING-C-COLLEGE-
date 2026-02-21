#include<iostream>
using namespace std;

void paternPrint(int n){
    
    for(int i = 1; i<=n; i++){ 
   
        for(int j = 0; j<i; j++)
            cout << " ";
            
        for(int j = 0; j<=n-i; j++ ){
        cout << i ;
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