#include <iostream>
#include <vector>
using namespace std;

int binary_search(int arr[], int n, int key){
    int i = 0, j = n;

    while(i < j) {
        int mid = i + (j - i) / 2; // middle value
        if (arr[mid] == key) return mid;
        if(arr[mid] > key) j = mid ;
        if(arr[mid] < key) i = mid + 1;
    }

    return -1;
}


// Recursive Method
int binary_search(int arr[], int start, int end, int key) {
    if(start > end) return -1;

    int mid = start + (end - start) / 2;
    if (arr[mid] == key) return mid;

    if(arr[mid] > key)
        return binary_search(arr, start, mid - 1, key); // MUST USE RETURN

    if(arr[mid] < key)
        return binary_search(arr, mid + 1, end, key);
}
