#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate (int arr[] , int size) {
    for(int i = 0;i<size;i+=2) {
        if(i+1<size) {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main() {
    int arr_odd [10] = {1,2,3,4,5,6,7,8,9,10};
    int arr_even [5] = {1,2,3,4,5};

    swapAlternate(arr_odd,10);
    printArray(arr_odd,10);

    cout << endl;

    swapAlternate(arr_even,5);
    printArray(arr_even,5);
}