#include <iostream>
using namespace std;

int main() {
    /*
    cout << "BitWise Operator" << endl;
    int p = 4;
    int q = 6;

    cout << "p & q -> " << (p & q) << endl;
    cout << "p | q -> " << (p | q) << endl;
    cout << "~p -> " << (~p) << endl;
    cout << "p ^ q -> " << (p ^ q) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    cout << "Q-1" << endl; 

    int x , y = 1;
    x = 10;
    if (++x)
        cout<< y << endl;
    else
        cout<< ++y << endl;
 */
    cout << "Q-2" << endl; 

    int a = 1;
    int b = 2;
    if(a-->0 && ++b > 2 ) {
    cout << "Stage1 - Inside If ";
    } 
    else{
    cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
 /*
    cout << "FOR LOOP" << endl; 

    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;
    cout << "printing counting from 1 to n" << endl;

    for (int i = 1; i<=n; i++){
        cout << i << endl;
    }

    cout << "Fabonacci Series"<< endl;

    int n = 10;
    int m = 0;
    int t = 1;
    cout << m <<" " << t << " " ;
    for (int i = 1; i<=n; i++){
        int nextN = m + t;
        
        cout << nextN << " ";

        m = t;
        t = nextN ;
    }


    cout << "Check Prime No."<< endl;

    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++){
        if (n%i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0){
        cout << " Not a Prime No." << endl;
    }
    else{
        cout << " Prime No." << endl;
    }

    cout << "Q-3" << endl;

    for( int i = 0; i <= 5; i++){
        cout << i << " ";
        i++;
    } // 0 2 4
    
    cout << "Q-4" << endl; 

     for( int i = 0; i <= 5; i--){
        cout << i << " ";
        i++;
    } // 0 0 0 0 .... 
    
    cout << "Q-5" << endl; 

     for( int i = 0; i <= 15; i += 2){
        cout << i << " ";
        if (i&1){
            continue;
        }
        i++;
    } // 0 3 5 7 9 11 13 15 
    
    
    cout << endl << "Q-6" << endl; 

     for( int i = 0; i < 5; i++){
         for (int j = i ; j<=5; j++){
             cout << i << " " << j << endl;
         }
    }

    cout << "Q-7" << endl; 

     for( int i = 0; i < 5; i++){
         for (int j = i ; j<=5; j++){
             if (i+j == 10){
                 break;
             }
             cout << i << " " << j << endl;
         }
    }

    */

   

}
    

