#include <iostream>
using namespace std;

void update(int arr[], int n){
    
    cout << "In Void FNC" << endl;

    // updating array's first element

    arr[0] = 120;

    // printing the whole array
    for (int i = 0; i < n; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going Out of Void FNC" << endl;

}

int main(){

    int arr[3] = {1, 2, 3};

    update(arr, 3);

    // printing the whole array
    for (int i = 0; i < 3; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}