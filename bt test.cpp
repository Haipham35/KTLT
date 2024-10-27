#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Khai báo struct nhân viên
struct NhanVien {
    string MaNV;
    string hoTen;
    int namSinh;
    double hsLuong;
    double luong;
    string chucDanh;
    double PCCV;
    double tongLuong;
    double congDoanPhi;
};

// Khai báo struct phòng ban
struct PhongBan {
    string ten;
    string diaChi;
    int soLuongNV;
    double luongToiThieu;
    vector<NhanVien> danhSachNV;
    double tongLuongPB;
    double tongCongDoanPhi;
};

int main() {
    int n;
    cout << "**    CHUONG TRINH QUAN LY Phong Ban - Nhan vien    **" << endl;
    cout << "**1. Nhap cac Phong ban" << endl;
    cout << "**2. In ket qua ds phong ban va Nhan vien**" << endl;
    cout << "**0. Thoat                 **" << endl;
    cout << "*********************************************" << endl;
    cout << "**        Nhap lua chon cua ban        **" << endl;

    int soPhongBan;
    vector<PhongBan> danhSachPhongBan;

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
                cout << "Nhap so phong ban: ";
                cin >> soPhongBan;

                for (int j = 0; j < soPhongBan; j++) {
                    PhongBan phong;
                    cout << "Moi ban nhap vao thong tin phong ban thu " << (j + 1) << endl;
                    cout << "Ten phong ban: ";
                    cin.ignore();
                    getline(cin, phong.ten);
                    cout << "Dia chi: ";
                    getline(cin, phong.diaChi);
                    cout << "Luong toi thieu: ";
                    cin >> phong.luongToiThieu;
                    cout << "So nhan vien: ";
                    cin >> phong.soLuongNV;

                    if (phong.soLuongNV != 0) {
                        cout << "Nhap danh sach nhan vien: " << endl;
                    }

                    for (int i = 0; i < phong.soLuongNV; i++) {
                        NhanVien nhanVien;
                        cout << "Nhan vien thu " << i + 1 << endl;
                        cout << "    MaNV: ";
                        cin >> nhanVien.MaNV;
                        cout << "    Ho ten Nhan Vien: ";
                        cin.ignore();
                        getline(cin, nhanVien.hoTen);
                        cout << "    Nhap Nam sinh: ";
                        cin >> nhanVien.namSinh;
                        cout << "    Nhap HS Luong: ";
                        cin >> nhanVien.hsLuong;
                        cout << "    Nhap chuc danh: ";
                        cin.ignore();
                        getline(cin, nhanVien.chucDanh);

                        if (nhanVien.chucDanh == "GVCC")
                            nhanVien.PCCV = 2000;
                        else if (nhanVien.chucDanh == "GVC")
                            nhanVien.PCCV = 1500;
                        else if (nhanVien.chucDanh == "GV")
                            nhanVien.PCCV = 1000;
                        else if (nhanVien.chucDanh == "CBKT")
                            nhanVien.PCCV = 750;
                        else if (nhanVien.chucDanh == "CBHC")
                            nhanVien.PCCV = 500;

                        nhanVien.luong = nhanVien.hsLuong * phong.luongToiThieu + nhanVien.PCCV;
                        nhanVien.congDoanPhi = 0.01 * nhanVien.luong;

                        phong.danhSachNV.push_back(nhanVien);
                    }

                    danhSachPhongBan.push_back(phong);
                }
                break;
            }
            case 2: {
                cout << "Ban da chon xuat danh sach phong ban." << endl;
                for (int p = 0; p < danhSachPhongBan.size(); p++) {
                    const PhongBan& phong = danhSachPhongBan[p];
                    cout << "__________________________________________" << endl;
                    cout << "Ten phong ban: " << phong.ten << endl;
                    cout << "Dia chi: " << phong.diaChi << endl;
                    cout << "Luong TT: " << phong.luongToiThieu << endl;

                    double tongLuong = 0;
                    double tongCongDoanPhi = 0;

                    for (int i = 0; i < phong.danhSachNV.size(); i++) {
                        const NhanVien& nhanVien = phong.danhSachNV[i];
                        tongLuong += nhanVien.luong;
                        tongCongDoanPhi += nhanVien.congDoanPhi;
                    }

                    cout << "Tong Luong PB: " << tongLuong << endl;
                    cout << "Tong Cong Doan Phi: " << tongCongDoanPhi << endl;

                    cout << "Bang luong Nhan vien: " << endl;
                    for (int i = 0; i < phong.danhSachNV.size(); i++) {
                        const NhanVien& nhanVien = phong.danhSachNV[i];
                        cout << "\n";
                        cout << "MaNV: " << nhanVien.MaNV << endl;
                        cout << "Ho ten: " << nhanVien.hoTen << endl;
                        cout << "Nam sinh: " << nhanVien.namSinh << endl;
                        cout << "HS Luong: " << nhanVien.hsLuong << endl;
                        cout << "Luong: " << nhanVien.luong << endl;
                        cout << "Cong doan phi:" << nhanVien.congDoanPhi << endl;
                        cout << "Con nhan: " << nhanVien.luong - nhanVien.congDoanPhi << endl;
                        cout << "Chuc danh: " << nhanVien.chucDanh << endl;
                    }
                    cout << "\n";
                }
                break;
            }
        }
    }

    return 0;
}

