#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int num[], int n){

    int maxi = INT_MIN;
    for(int i = 0; i < n; i++ ){

        maxi = max(maxi, num[i]);
        // if(num[i] > max)
        // max = num[i];
        }
    // return max
        return maxi;
    }
    

int getMin(int num[], int n){

    int mini = INT_MAX;
    for(int i = 0; i < n; i++ ){

        mini = min(mini, num[i]);
        // if(num[i] > max)
        // max = num[i];
        }
    // return max
        return mini;
}
int main(){

    int size;
    cin >> size;
    int num[100];

    //taking input in array

    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    cout << "Maximum Value of Array is " << getMax(num, size) << endl;
    cout << "Minimum Value of Array is " << getMin(num, size) << endl;

}