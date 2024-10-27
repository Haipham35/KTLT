#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int val1, val2;
    cout<<"PHAM THANH HAI-20211015";
    cin >> val1 >> val2;
    vector< vector<int> > a = {
        {1, 3, 7},
        {2, 3, 4, val1},
        {9, 8, 15},
        {10, val2},
    };
    sort(a.begin(), a.end(),
         [] (const vector<int> &p, const vector<int> &q){
        int sump = 0; int sumq = 0;
        std::vector<int>::size_type pSize = p.size()  ;
        std::vector<int>::size_type qSize = q.size() ;


        for(std::vector<int>::size_type  i = 0; i < pSize; i++)
            sump += p[i];
        for(std::vector<int>::size_type i = 0; i < qSize; i++)
            sumq += q[i];
        return sump > sumq;
    });
     
    for (const auto &v : a) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
