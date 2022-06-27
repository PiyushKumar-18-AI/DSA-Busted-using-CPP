#include <iostream>
using namespace std;

int dummy(int n){

    n++;
    cout << n << endl;

}

int main(){

    int a;

    cin >> a;

    dummy(a);

    cout << "main " << a << endl;

}