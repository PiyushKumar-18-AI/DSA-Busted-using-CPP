// Optimized Code for Binary Search
// change is with the formula of finding mid element

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2; 

 '''
    if start and end gets a huge value and there sum is out of ..
    .. the range of int then this code for mid will work well
 '''

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1; // right side shift
        }
        else{
            end = mid - 1; // left side shift
        }

        mid = start + (end - start)/2;
    }

    return -1;

}

int main(){

    int even[6] = {2, 4, 6, 8, 10, 12};

    int odd[5] = {14, 16, 18, 20, 32};

    int evenIndex = binarySearch(even, 6, 12);

    cout << " Index of 12 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 32);

    cout << " Index of 32 is " << oddIndex << endl;
/*
    for non-existing Element in Array

    int oddIndex = binarySearch(odd, 5, 30);

    cout << " Index of 30 is " << oddIndex << endl;
    
*/
}