#include <iostream>
using namespace std;

void SumArray(int arr[], int n){
    int SumArray = 0;
    for(int i = 0; i < n; i++){
            SumArray += arr[i];
    }
    cout << "Sum of all the elements in the Array : " << SumArray << endl;
}

int main(){
    int arr[100], i, n;
    cin >> n;
    cout << "Enter the Size of the Array (max. 100): " << n << endl;
    cout << "Enter the Elements of the Array: " << endl;
    for (i = 0; i < n; i++){
    cin >> arr[i];
    cout << arr[i] << ' ';
    }
    cout<< endl;
    SumArray(arr, n);
}