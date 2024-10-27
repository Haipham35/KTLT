#include<iostream>
using namespace std;
int **mt3;
void input(int **mt, int n){
    for (int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            
            cin>>*(*(mt+i)+j);
        }
}
void output(int **mt, int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cout<<*(*(mt+i)+j)<<"\t";
        cout<<endl;
}
}

void free_mem(int **mt, int n){
    for(int i=0;i<n;i++) delete[] (mt+i);
    delete[]mt;
}
void tong(int **mt1, int **mt2, int m){
    for (int i=0;i<m;i++) {
        for(int j=0;j<m;j++)
            *(*(mt3+i)+j) = *(*(mt1+i)+j) + *(*(mt2+i)+j) ;
    }
}
void tich(int **mt1, int **mt2, int m){
    for (int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            *(*(mt3+i)+j) = 0;

            for(int k=0;k<m;k++)
                *(*(mt3+i)+j)+= (*(*(mt1+i)+k) * *(*(mt2+k)+j) );
        }
    }
}
int main(){
    int n, **mt1, **mt2;
    cout<< "PHAM THANH HAI - 20211015 \n";
    cin>>n;
   // diachi(mt1,n);
    mt1 = new int*[n];
    for (int i=0; i<n ;i++)
        mt1[i] = new int[n];

     input(mt1,n);
    //diachi	(mt2,n);
     mt2 = new int*[n];
    for (int i=0; i<n ;i++)
        mt2[i] = new int[n];

    input(mt2,n);
    //diachi(mt3,n);
	 mt3 = new int*[n];
    for (int i=0; i<n ;i++)
        mt3[i] = new int[n];

    tong(mt1,mt2,n);
    cout<<"Tong: \n";
    output(mt3,n);

    tich(mt1,mt2,n);
    cout<<"Tich: \n";
    output(mt3,n);

    free_mem(mt1,n);
    free_mem(mt2,n);
    free_mem(mt3,n);

}
