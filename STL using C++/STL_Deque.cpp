// STL for Arrays
#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <int> d;
    d.push_back(1);
    d.push_back(2); // putting element from ending 
    d.push_front(7); // putting element from starting 
    for(int i : d){
        cout << i << " ";
    }cout << endl;
    // what all things can we do with arrays using STL
    cout << "Element at the 2nd Index " << d.at(2) << endl;
    cout << "Is Array Empty or not?  " << d.empty() << endl;
    cout << "First Element " << d.front() << endl;
    cout << "Last Element " << d.back() << endl;

    cout << "Before Erase Size " << d.size() << endl;
    for(int i : d){
        cout << i << " ";
    }cout << endl;
    d.erase(d.begin(), d.begin()+1); // erase the first element
    cout << "After Erase Size " << d.size() << endl;   
    for(int i : d){
        cout << i << " ";
    }cout << endl;

}