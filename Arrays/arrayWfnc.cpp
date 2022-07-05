#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    cout << "Printing Integer related Arrays only" << endl;
    for (int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl << "Printing Done" << endl;
}

int main(){
    // Random values will be printed in array 'one' and 'two'
   int one[15];
   printArray(one, 15);
   cout << endl;

   int two[10];
   printArray(two, 10);
   cout << endl;
    
    int three[15] = {2, 7, 5};
    printArray(three, 15);
    cout << endl;
    
    // Arrays with different data types
    
    char ch[3] = {'a','b','c'};
    for (int i = 0; i < 3; i++ ){
        cout << ch[i] << " ";
    }
    
    double d[3];

    float f[3];

    bool b[9];

}