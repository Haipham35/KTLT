#include <bits/stdc++.h>
using namespace std;
#define MAXN 201

int N, K1, K2, cnt = 0;
int a[MAXN], sum = 0, dau = -1;
void TRY(int i){
    if (i > N) {
        for (int i = 1;  i<= N; ++i){
            if(sum < K1 && sum > 0) return;
            cout<<a[i];
        }
        cnt++;
        cout<<endl;
        return;
    }
    if (dau == -1) {
        a[i] = 0;
        dau = 0;
        TRY(i + 1);

        a[i] = 1;
        dau = 1;
        sum = 1;
        TRY(i + 1);
        exit(0);
    }
    int old_S = sum;
    int old_D = dau;

    if (old_D == 0) {
        a[i] = 1;
        dau = 1;
        sum = 1;
        TRY(i + 1);
        sum = old_S;
        dau = old_D;
    }
    else {
        if (old_S < K2) {
            if (old_S >= K1) {
            a[i] = 0;
            dau = 0;
            sum = 0;
            TRY (i + 1);
            sum = old_S;
            dau = old_D;
            }

            a[i] = 1;
            dau = 1;
            ++sum;
            TRY(i + 1);
            sum = old_S;
            dau = old_D;
        }
        else {
            a[i] = 0;
            dau = 0;
            sum = 0;
            TRY (i + 1);
            sum = old_S;
            dau = old_D;
        }
    }
}

int main (){
   
    cout<<"PHAM THANH HAI - 20210105\n";
     cin>>N>>K1>>K2;
    TRY (1);
    cout << cnt;
    return 0;
}
