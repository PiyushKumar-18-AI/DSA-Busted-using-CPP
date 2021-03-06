// First and Last Occurance of element in an array

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2; 

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1; // right side shift
        }
        else if(key < arr[mid]){
            end = mid - 1; // left side shift
        }

        mid = start + (end - start)/2;
    }

    return ans;

}

int lastOcc(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2; 

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(key > arr[mid]){
            start = mid + 1; // right side shift
        }
        else if(key < arr[mid]){
            end = mid - 1; // left side shift
        }

        mid = start + (end - start)/2;
    }

    return ans;

}

int main(){

    int even[6] = {2, 4, 4, 4, 10, 12};

    cout << "The First Occurance of 4 is at Index " << firstOcc(even, 6, 4) << endl;
    cout << "The Last Occurance of 4 is at Index " << lastOcc(even, 6, 4) << endl;

}

// According Coding Ninjas Question the code is below
/*
#include <iostream>
#include <vector>
using namespace std;


int firstOcc(vector<int>& arr, int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2; 
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1; // right side shift
        }
        else if(key < arr[mid]){
            end = mid - 1; // left side shift
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr , int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2; 
    int ans = -1; 
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1; // right side shift
        }
        else if(key < arr[mid]){
            end = mid - 1; // left side shift
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);

    return p;
}
*/