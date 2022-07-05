#include <iostream>
using namespace std;

void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while( start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){

    for( int i = 0; i < n; i++){
        cout << arr[i] << " ";   
    } cout << endl;
}

int main(){

    int oarr[5] = {2, 5, 7, 9, 4};
    int earr[4] = {3, 10, 14, 21};

    reverse(oarr, 5);
    reverse(earr, 4);

    printArray(oarr, 5);
    printArray(earr, 4);

    return 0;

}