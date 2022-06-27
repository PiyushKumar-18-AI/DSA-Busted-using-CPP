#include <iostream>
using namespace std;

// 1 -> is Prime
// 0 -> is not Prime
bool isPrime(int a){
    for (int i = 2; i < a; i++){
        if (a%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    cin >> num;
    if (isPrime(num)){
        cout << "Number is Not Pime" << endl;
    }
    else{
        cout << "Number is Prime" << endl;
    }
}