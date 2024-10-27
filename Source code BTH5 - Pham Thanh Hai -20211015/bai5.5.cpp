#include <bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Pham Thanh Hai-20211015\n";
    int n;
    cin >> n;
    bool found = true;
    while(n--){
        int a;
        cin >> a;
        if (a % 400 != 0) {
            if (a % 4 != 0) {
                found = false;
                break;
            }
            if (a % 100 == 0){
                found = false;
                break;
            }
        }
    }
    if (found) cout << "Yes";
    else cout << "No";
}
