#include <iostream>
using namespace std;

int main(){

    int arr[15];

    cout << "Value at 4th index is " << arr[4] << endl;

    int array[10] = {2, 5, 7};

    cout << "Value at 4th index is " << array[4] << endl;

    int n = 10;
    // priting the whole array
    for (int i = 0; i < n; i++ ){
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Everything is Fine" << endl;

    // initializing all the values with 0

    int fourth[10] = {0};
    int n = 10;
    // priting the whole array
    for (int i = 0; i < n; i++ ){
        cout << fourth[i] << " ";
    }


}