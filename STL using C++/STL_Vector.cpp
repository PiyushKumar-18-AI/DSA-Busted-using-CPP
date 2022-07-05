// STL for Vectors
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> v;
    vector <int> a(5,1);
    cout << "Print Vector a - " << endl;
    for (int i:a){
        cout << i << " ";
    } cout << endl;
     cout << "Print Vector last - " << endl;
    vector <int> last(a);
        for (int i:last){
        cout << i << " ";
    } cout << endl;
    // what all things can we do with vectors using STL
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;
    cout << "Element Entry" << endl;
    v.push_back(2);
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;
    cout << "Element Entry" << endl;
    v.push_back(4);
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;
    cout << "Element Entry" << endl;
    v.push_back(6);
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;
    cout << "Element Entry" << endl;
    v.push_back(10);
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;
    cout << "Element Entry" << endl;
    v.push_back(12);
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;
    
    cout << "Element at the 2nd Index " << v.at(2) << endl;
    cout << "First Element " << v.front() << endl;
    cout << "Last Element " << v.back() << endl;

    cout << "Before Pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "After Pop" << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;
    
    cout << "Before v.clear : " << endl;
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;  
    v.clear();
    cout << "After v.clear : " << endl;
    cout << "Capacity  " << v.capacity() << endl;
    cout << "Size  " << v.size() << endl;
}