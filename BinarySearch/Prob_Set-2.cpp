// Peak Element in an array

#include <iostream>
using namespace std;

int peakElement(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2; 

    while(start < end){

        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }

        else {
            end = mid; 
        }
        
        mid = start + (end - start)/2;
    }

    return start;

}


int main(){

    int even[6] = {2, 4, 6, 12, 10, 4};

    cout << "The Peak Element is at Index " << peakElement(even, 6) << endl;

}

// According Leet Code Question the code is below
/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2; 

    while(start < end){

        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }

        else {
            end = mid; 
        }
        
        mid = start + (end - start)/2;
    }

    return start;
    }
};

*/