//Problem description
/* 
 WAP to find the count of distinct element in the given array:
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 1, 2, 3, 3, 4};
    int i =0, j =1;
    while(j < sizeof(arr)/sizeof(arr[0])){
        if(arr[i] != arr[j]){
            i = i+1;
            arr[i] = arr[j]; 
           
        }
        j++;
    }
    cout << i+1;
    cout << "\n";
    return 0;
}



/*
 for this we are using a while loop , which runs untill the value of j variable is smaller than the size of array .
 Inside while loop, we use if condition , in first if condition value at index i and value at index j is not equal , then first we increment the i  and then assign the value of arr[j] to the arr[i].
 just after the if condition , we increment the value of j. 
 After this we got a sorted array with distinct element and the value of i will be the index of last distinct element in the array.
 so we print the value of i+1 to get the count of distinct element in the array.
 The time complexity of this approach is O(n) and the space complexity is O(1)
*/