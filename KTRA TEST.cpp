#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Sanpham {
	string maSP;
    string tenSP;
    int soluongSP;
    double dongia;
  	double thanhtien;
  	double sptonggiam;
    double tiengiam;
    
};
struct Phieunhap {
    string tennhacungcap;
    int ngay;
    int thang;
    int nam;
    int sosanpham;
    double sotiendathanhtoan;
    double sotienphaitra;
    double tonggiam;
    vector<Sanpham> danhSachSP;
   
};



int main() {
    int n;
    cout << "Pham Thanh Hai - 1015 - 2022.2 - IT3040 - 727640"<<endl;
    cout << "**    CHUONG TRINH QUAN LY Nha CC    **" << endl;
    cout << "**1. Nhap Nha CC Phieu Nhap" << endl;
    cout << "**2. In ket qua PHIEU Phiep nhap - San Pham**" << endl;
    cout << "**0. Thoat                 **" << endl;
    cout << "*********************************************" << endl;
    cout << "**        Nhap lua chon cua ban        **" << endl;

    int soPhieunhap;
    vector<Phieunhap> danhSachPhieunhap;

    while (1) {
        cout << "Lua chon cua ban la: ";
        cin >> n;
        switch (n) {
            case 0: {
                cout << "Ban da chon thoat chuong trinh!" << endl;
                exit(0);
                break;
            }
            case 1: {
                cout << "Nhap so Phieu Nhap: ";
                cin >> soPhieunhap;

                for (int j = 0; j < soPhieunhap; j++) {
                    Phieunhap phieu;
                    cout << "Nhap thong tin Phieu nhap: " << (j + 1) << endl;
                    cout << "Ten nha cung cap: ";
                    cin.ignore();
                    getline(cin, phieu.tennhacungcap);
                    cout<< "Ngay:";
                    cin>> phieu.ngay;
                    cout<< "Thang:";
                    cin>> phieu.thang;
                    cout<< "Nam:";
                    cin>> phieu.nam;
                    
                    cout << "So san pham: ";
                    cin >> phieu.sosanpham;

                    if (phieu.sosanpham != 0) {
                        cout << "Nhap danh sach san pham: " << endl;
                    }

                    for (int i = 0; i < phieu.sosanpham; i++) {
                        Sanpham sanpham;
                        cout << "San Pham " << i + 1 << endl;
                        cout << "    Ma so SP: ";
                        cin >> sanpham.maSP;
                        cout << "    Ten san pham:  ";
                        cin.ignore();
                        getline(cin, sanpham.tenSP);
                        cout << " So luong SP: ";
                        cin >> sanpham.soluongSP;
                        cout << " Don gia: ";
						cin>> sanpham.dongia;
                        if (sanpham.soluongSP < 10)
                            sanpham.tiengiam = 0;
                        else if (sanpham.soluongSP < 50)
                            sanpham.tiengiam = 0,01 ;
                        else if (sanpham.soluongSP <100)
                            sanpham.tiengiam = 0,02 ;    
                        else if (sanpham.soluongSP < 200)
                            sanpham.tiengiam = 0,025 ;
                        else if (sanpham.soluongSP < 500)
                            sanpham.tiengiam = 0,03 ;

                        sanpham.thanhtien = sanpham.soluongSP*sanpham.dongia;
                        sanpham.sptonggiam= sanpham.thanhtien*sanpham.tiengiam;

                        phieu.danhSachSP.push_back(sanpham);
                	}
					cout<<" Tong so tien da thanh toan: ";
					cin>> phieu.sotiendathanhtoan;
                 
                    

                    danhSachPhieunhap.push_back(phieu);
            	}
            	cout<<
                break;
        	}
        	case 2: {
                cout << "Ban da chon xuat phieu nhap, !" << endl;
                for (int p = 0; p < danhSachPhieunhap.size(); p++) {
                    const Phieunhap& phieu = danhSachPhieunhap[p];
                    cout << "__________________________________________" << endl;
                    cout << "Ten nha cung cap: " << phieu.tennhacungcap << endl;
                    cout << "Ngay thu: " << phieu.ngay << " "<< " thang "<< phieu.thang << " "<< " nam "<<phieu.nam <<endl;
                    cout << "so San Pham: "<< phieu.sosanpham << endl; 
                    cout << "Tong da thanh toan: " << phieu.sotiendathanhtoan << endl;
                   

                    double tongthanhtien = 0;
                    double tongtiengiam = 0;
					double tienthua = 0;
					
                    for (int i = 0; i < phieu.danhSachSP.size(); i++) {
                        const Sanpham& sanpham = phieu.danhSachSP[i];
                        tongthanhtien += sanpham.thanhtien;
                        tongtiengiam += sanpham.sptonggiam;
                    }

                    cout << "Tong Phai Thanh Toan: " << tongthanhtien << endl;
                    cout << "Tong tien giam: " << tongtiengiam << endl;
					cout << " Tien thua tra lai: "<< phieu.sotiendathanhtoan - tongthanhtien + tongtiengiam<< endl;
                    cout << "Chi tiet cac san pham " << endl;
                    for (int i = 0; i < phieu.danhSachSP.size(); i++) {
                        const Sanpham& sanpham = phieu.danhSachSP[i];
                        cout << "\n";
                        cout << "tMaSP: " << sanpham.maSP << endl;
                        cout << "Ten san pahm: " << sanpham.tenSP << endl;
                        cout << "Don gia:  " << sanpham.dongia << endl;
                        cout << "soluong: " << sanpham.soluongSP << endl;
                        cout << "Thanh tien: " << sanpham.thanhtien << endl;
                        cout << "Giam" << sanpham.sptonggiam << endl;
                    }
                    cout << "\n";
                }
                break;
            }
        }
    }

    return 0;
}

        
        
        
        
        
        
        
        
        
