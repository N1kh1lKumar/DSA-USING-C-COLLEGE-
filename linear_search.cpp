#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;           
        }
    }
    return -1;  
}

int main() {
    int n, key;
    cout << "Enter the number of elements: \n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Enter the key to search: \n";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << "\n";
    else
        cout << "Element not found" << "\n";

    return 0;
}


/*  Today , In our  DSA training session, we will be implementing the linear search algorithm in C++.
Linear search is a simple searching algorithm that checks each element of the array sequentially until the desired element is found or the end of the array is reached.
The time complexity of linear search is O(n) in the worst case, where n is the number of elements in the array. 
This is because in the worst case, we may have to check all elements of the array before finding the key or determining that it is not present.
The space complexity of linear search is O(1) because it only requires a constant amount of extra space for the key and the loop variable, regardless of the size of the input array.
In this implementation, we define a function `linearSearch` that takes an array, its size, and the key to search for.
The function iterates through the array and returns the index of the key if found, or -1 if the key is not present in the array.
In the `main` function, we take input for the number of elements, the elements themselves, and the key to search for, and then call the `linearSearch` function to get the result.
Finally, we print whether the element was found and its index or if it was not found.*/