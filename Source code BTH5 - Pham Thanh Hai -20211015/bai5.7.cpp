#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Pham Thanh Hai-20211015\n";
    int n;
    cin >> n;
    int ans = 0, sum = 0;
    while(n--){
        int k, t;
        cin >> k >> t;
        while(k--){
            int a;
            cin >> a;
            switch (t) {
                case 1: sum += a; break;
                case -1: sum -= a; break;
                default: break;
            }
            ans = max(ans, -sum);
        }
    }
    cout << ans;
}
