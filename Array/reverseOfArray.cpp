//problem Description:
/*
Given an array, print the reverse of it.using two pointer approach
*/


#include<iostream>
using namespace std;


class Array{
    public:
        int arr[100];
        int n;
        void input(){
            cout << "Enter the size of the array: ";
            cin >> n;
            cout << "Enter the elements of the array:\n " ;
            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }
        }

    
        void reverse(){
            int left = 0, right = n - 1;
            while(left < right){
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
            cout << "The reversed array is: ";
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){ 
    Array a;
    a.input();
    a.reverse();
    return 0;
}








/*
In this code, we define a class Array that contains an array of integers and its size.
The input method allows the user to enter the size of the array and its elements. 
The reverse method uses the two-pointer approach to reverse the array in place. 
It initializes two pointers, left and right, at the beginning and end of the array, respectively. 
It then swaps the elements at these pointers and moves them towards each other until they meet.
Finally, it prints the reversed array.
The time complexity of this approach is O(n) and 
the space complexity is O(1) since we are reversing the array in place without using any additional data structures.

*/