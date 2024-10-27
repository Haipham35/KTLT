#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int gcd2(int a, int b){
    
    //# Kh? d? quy
     while(b != 0){
        int sd = a % b;
        a = b;
        b = sd;
    }
    return a;
}
//Pham Thanh Hai-20211015
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl << gcd2(a, b);
    return 0;
}
