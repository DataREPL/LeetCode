#include <iostream>
#include <vector>
using namespace std;

void quicksort(int arr[], int left, int right) {

    if(left < right){

        int i = left, j = right, temp = arr[i];
        while(i < j) {
                while(i < j && arr[j] > temp ) j--;

                if(i < j) arr[i++] = arr[j];

                while(i < j && arr[i] <= temp) i++;
                if(i < j) arr[j--] = arr[i];
        }
        arr[i] = temp;

        quicksort(arr, left, i - 1);
        quicksort(arr, i + 1, right);
    }

}

