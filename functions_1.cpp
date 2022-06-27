#include <iostream>
using namespace std;
/*
// 1 -> Even
// 0 -> Odd
bool isEven(){
    int a;
    cin >> a;
    if(a&1){ 
        return 1;
    }
    return 0;
}

int main(){
    cout << isEven();
}
*/

// Another Way
bool isEven(int a){
    if(a&1){
        return 1;
    }
    return 0;
}

int main(){
    int num;
    cin >> num;
    if (isEven(num)){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
}