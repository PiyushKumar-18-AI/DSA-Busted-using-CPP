#include <iostream>
using namespace std;

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SwapAlternate(int arr[], int size){

    for (int i = 0; i < size; i+=2){ // i+=2 is done so that instead of 1, 2 blocks can be skipped
        if (i+1<size){
            swap(arr[i], arr[i+1]);
            /*
            instead of using inbuilt fnc we can use the below code to swap the nos.
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            */
        }
    }
}
int main(){

    int arr1[10] = {1,3,5,7,9,11,13,15,17,19}; // even array list
    int arr2[7] = {2,4,6,8,10,12,14}; // odd array list

    SwapAlternate(arr1, 10);
    printArray(arr1, 10);

    SwapAlternate(arr2, 7);
    printArray(arr2, 7);
}