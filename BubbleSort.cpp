#include <vector>
#include <bits/stdc++.h>
using namespace std;

// void bubbleSort(vector<int>& arr, int n)
void bubbleSort(int arr[], int n)
{   
    for(int i = 1; i < n ; i++){
        for(int j = 0; j < n - i ; j++){
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j+1]);
        }
    }
}

// OPTIMISED CODE -  Best Case = O(n)

/*
//void bubbleSort(vector<int>& arr, int n)
void bubbleSort(int arr[], int n)
{   
    for(int i = 1; i < n ; i++){
        bool swapped = false;
        for(int j = 0; j < n - i ; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        // IF no two elements were swapped 
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}
*/

// Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
  
// Driver code
int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    cout << "Initial Array: " << endl;
    printArray(arr,5);
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

