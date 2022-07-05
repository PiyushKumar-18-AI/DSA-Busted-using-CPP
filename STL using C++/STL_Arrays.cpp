// STL for Arrays
#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 4> a ={1,2,3,4};
    int size = a.size();
    for (int i = 0; i< size; i++){
        cout << a[i] << " ";
    }cout << endl;
    // what all things can we do with arrays using STL
    cout << "Element at the 2nd Index " << a.at(2) << endl;
    cout << "Is Array Empty or not?  " << a.empty() << endl;
    cout << "First Element " << a.front() << endl;
    cout << "Last Element " << a.back() << endl;
}