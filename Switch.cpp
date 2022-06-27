#include <iostream>
using namespace std;

int main(){

    int num = 2;

    switch ( num ){

        case 1 : cout << "First" << endl;
                 break;
        case 2 : cout << "Second" << endl;
                 break;
        default : cout << "Default Case" << endl;
                 break;
    }
}

// Nested Switch Case - It is not important
/*
#include <iostream>
using namespace std;

int main(){

    char ch = 'a';
    int num = 2;

    switch ( num ){

        case 1 : cout << "First" << endl;
                 break;
        case 2 : switch(ch){
                    case 'a' :cout << "Value of num is " << num << endl;
                    break;
                }
            break;
        default : cout << "Default Case" << endl;
                 break;
    }
}
*/

// Calculator
/*
#include <iostream>
using namespace std;

int main(){

    char oper ;
    int a ;
    cout << "Enter Value of A" << endl;
    cin >> a;
    int b ;
    cout << "Enter Value of B" << endl;
    cin >> b;
    cout << "Enter Operation " << endl;
    cin >> oper;
    switch ( oper ){

        case '+' : cout << "Sum of a & b is " << a + b << endl;
                 break;
        case '-' : cout << "Difference of a & b is " << a - b << endl;
                break;
        case '*' : cout << "Product of a & b is " << a * b << endl;
                 break;
        case '%' : cout << "Division of a & b is " << a / b << endl;
                break;     
        default : cout << "Default Case" << endl;
                 break;
    }
}
*/