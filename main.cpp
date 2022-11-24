#include <iostream>
using namespace std;

int n=0,a=1,b=1,c=0;

int main() {
    cin>> n ;
    if(n<2){
        cout<< "errore";
    }else{
        cout << a << endl << b << endl;
        for(int i=2;i<n;i++) {
            c = a + b;
            a = b;
            b = c;
            cout<< c << endl;
        }
    }
    return 0;
}
