#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for (int i = 0; i < size; i++){

        if( arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr [10] = {5, 7, 11, -2, 20, -6, 0, 18, -29, 35};
    
    int key;
    cin >> key;
    cout << "Enter the element to search for " << key << endl;

    bool found = search(arr, 10, key);

    if (found){
        printf("The Element is Present in the Array i.e. %d \n", key) ;
    }
    else{
        cout << "The Element is Absent in the Array" << endl;
    }

    return 0;


    /*
    // without taking input of key element
    // check wheather there is -6 present in the array?

    bool found = search(arr, 10, -6);

    if (found){
        cout << "The Element is Present in the Array" << endl;
    }
    else{
        cout << "The Element is Absent in the Array" << endl;
    }

    return 0;
    */
}