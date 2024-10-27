#include<bits/stdc++.h>
using namespace std;
typedef struct SanPham{
    string MaSP;
    string TenSP;
    int soluong;
    int donGia;
    int thanhTien;
    float tienGiam (){
        if(this->soluong < 10){
            return 0;
        }
        else if(this->soluong < 50){
            return this->thanhTien * 0.01;
        }
        else if(this->soluong < 100){
            return this->thanhTien * 0.02;
        }
        else if(this->soluong < 200){
            return this->thanhTien * 0.025;
        }
        else if(this->soluong < 500){
            return this->thanhTien * 0.03;
        }
    }
}SanPham;
typedef struct PhieuNhap{
    string tenNhaCungCap;
    int Ngay;
    int Thang;
    int Nam;
    int soSP;
    SanPham SanPham[100];
    int daThanhToan;
    int phaiThanhToan;
    float sumGiam;
    float thanhToanThua;
}phieuNhap;
int n;
PhieuNhap x[100];
int tongPhaiThanhToan = 0;
int tongDaThanhToan = 0;
float duocGiamGia = 0;
void insertList(){
    printf("Ban da chon nhap ds Phieu Nhap SP!\n");
    for(int i = 0 ; i < n ; i++){
        x[i].sumGiam = 0;
        x[i].phaiThanhToan = 0;
        cout<<"Nhap thong tin Phieu Nhap "<<i+1<<": "<<endl;
        cin.ignore();
        cout<<"\tTen nha cung cap: ";
        getline(cin, x[i].tenNhaCungCap);
        cout<<"\tNgay: ";
        scanf("%d", &x[i].Ngay);
        cout<<"\tThang: ";
        scanf("%d", &x[i].Thang);
        cout<<"\tNam: ";
        scanf("%d", &x[i].Nam);
        cout<<"\tSo San pham: ";
        scanf("%d", &x[i].soSP);
        cout<<"\tNhap ds San pham"<<endl;
        for(int j = 0 ; j < x[i].soSP ; j++){
            cout<<"\tSan Pham "<<j+1<<endl;
            cout<<"\t\tMa so SP: ";
            cin>>x[i].SanPham[j].MaSP;
            cout<<"\t\tTen SP: ";
            cin.ignore();
            getline(cin, x[i].SanPham[j].TenSP);
            cout<<"\t\tSo luong SP: ";
            scanf("%d", &x[i].SanPham[j].soluong);
            cout<<"\t\tDon gia nhap: ";
            scanf("%d", &x[i].SanPham[j].donGia);
            x[i].SanPham[j].thanhTien = x[i].SanPham[j].soluong * x[i].SanPham[j].donGia;
            x[i].phaiThanhToan += x[i].SanPham[j].thanhTien;
            x[i].sumGiam += x[i].SanPham[j].tienGiam();
        }
        cout<<"\tSo tien da thanh toan: ";
        scanf("%d", &x[i].daThanhToan);
        tongDaThanhToan += x[i].daThanhToan;
        tongPhaiThanhToan += x[i].phaiThanhToan;
        duocGiamGia += x[i].sumGiam;
    }
    cout<<"Ban da nhap thanh cong!"<<endl;
    cout<<"Bam phim bat ky de tiep tuc!"<<endl;
}
void printList(){
    printf("Ban da chon xuat Phieu Nhap, !\n");
    for(int i = 0 ; i < n ; i++){
        printf("___________________________________________________________________________________________________________\n");
        cout<<"\tTen Nha Cung cap: "<<x[i].tenNhaCungCap<<endl;
        cout<<"\tNgay thu: Ngay "<<x[i].Ngay<<" Thang "<<x[i].Thang<<" nam "<<x[i].Nam<<endl;
        cout<<"\tSo San Pham: "<<x[i].soSP<<endl;
        cout<<"\tTong da thanh toan: "<<x[i].daThanhToan<<endl;
        cout<<"\tTong phai Thanh toan: "<<x[i].phaiThanhToan<<endl;
        cout<<"\tTong tien giam: "<<x[i].sumGiam<<endl;
        cout<<"\tThanh toan thua: "<<(x[i].daThanhToan - x[i].phaiThanhToan)<<endl;
        cout<<"\t\tChi tiet cac san pham"<<endl;
        cout<<"\tMaSp\tTenSanPham\tDongia\tsoluong\tThanhtien\tgiam"<<endl;
        for(int j = 0 ; j < x[i].soSP ; j++){
            cout<<"\t"<<x[i].SanPham[j].MaSP<<"\t"<<x[i].SanPham[j].TenSP<<"\t\t"<<x[i].SanPham[j].donGia<<"\t"<<x[i].SanPham[j].soluong<<"\t"<<x[i].SanPham[j].thanhTien<<"\t\t"<<x[i].SanPham[j].tienGiam()<<endl;
        }
    }
    cout<<"Tong phai thanh toan cac Phieu Nhap: "<<tongPhaiThanhToan<<endl;
    cout<<"Tong da thanh toan cac Phieu Nhap: "<<tongDaThanhToan<<endl;
    cout<<"Tong duoc giam cua cac phieu nhap: "<<duocGiamGia<<endl;
}
int main(){
    cout<<"Pham Thanh Hai - 1015- 2022.2- IT3040 - 727640"<<endl;
    cout<<"Nhap so phieu Nhap: ";
    cin>>n;
    while(true){
        cout<<"**  CHUONG TRINH QUAN LY Nha CC  **"<<endl;
        cout<<"**1. Nhap Nha CC Phieu Nhap      **"<<endl;
        cout<<"**2. IN KET QUA PHIEU Phieu Nhap - San Pham**"<<endl;
        cout<<"**0. Thoat                        **"<<endl;
        cout<<"***************************************************"<<endl;
        cout<<"**      Nhap lua chon cua ban     **"<<endl;
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 0: {
                cout << "Ban da chon thoat chuong trinh!" << endl;
                exit(0);
                break;
            }
        case 1:
            cout<<"Pham Thanh Hai - 1015- 2022.2- IT3040 - 727640"<<endl;
            insertList();
            break;
        case 2:
            cout<<"Pham Thanh Hai - 1015- 2022.2- IT3040 - 727640"<<endl;
            printList();
            break;
        default:
            return 0;;
        }
    }
    return 0;
}
