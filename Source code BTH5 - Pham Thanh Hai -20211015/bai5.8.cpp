#include <bits/stdc++.h>
using namespace std;
#define HNT  ios_base::sync_with_stdio(false);    cin.tie(0);
int w, h;
int table[601][601];
int main(){
	cout<<"Pham Thnah Hai-20211015\n";
    HNT;
    int w, h, m;
    cin >> w >> h;
    cin >> m;
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            table[i][j] = i*j;
        }
    }

    for (int i=0; i<m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        table[tmp2][tmp1] = 0;
    }
    //dp
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            int minWaste = table[i][j];
            // horizonal cut
            for(int k=1; k<=i; k++) {
                minWaste = min(minWaste, table[k][j] + table[i-k][j]);
            }
            // vertical cut
            for (int k=1; k<=j; k++) {
                minWaste = min(minWaste, table[i][k] + table[i][j-k]);
            }
            table[i][j] = minWaste;
        }
    }

    cout << table[h][w] << endl;
}
