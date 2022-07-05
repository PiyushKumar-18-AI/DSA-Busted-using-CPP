#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int ans = 0;
    int i = 0;
    int n;
    cin >> n;

    while (n != 0){

        int bit = n & 1;

        ans = ((bit * pow(10, i)) + ans);

        n = n >> 1;
        i++;

    }
    
    cout << "The Answer is " << ans;

}

// Binary to Decimal
/*
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int ans = 0;
    int i = 0;
    int n;
    cin >> n;

    while (n != 0){

        int digit = n % 10;

        ans = (digit + pow(2, i));

        n = n / 10;
        i++;

    }
    
    cout << "The Answer is " << ans;

}
*/