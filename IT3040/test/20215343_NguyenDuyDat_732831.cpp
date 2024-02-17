#include <bits/stdc++.h>
using namespace std;
/*
    Nguyen Duy Dat 20215343 - 732831 - 2023.1

*/
struct NhanVien
{
    string MaNV, HoTen, ChucDanh;
    int NamSinh, PhuCap;
    double HSLuong, Luong;
};
struct PhongBan
{
    string TenPB, DiaChi;
    double LuongToiThieu, TongCDPhi, TongLuong;
    int SoNhanVien;
    vector<NhanVien> NV;
};
unordered_map<string, int> phucap = {
    {"GVCC", 2000},
    {"PVC", 1500},
    {"GVTS", 1000},
    {"CBKT", 750},
    {"CBHC", 500},
};
int main()
{
    int choice;
    int soPB;
    vector<PhongBan> PB;
    while (true)
    {
        cout << "Kip 9h15-11h45 Tuan 16 - Ngay 18.12.2023\n";
        cout << "Nguyen Duy Dat 20215343 - 732831 - 2023.1:\n";
        cout << "**  CHUONG TRINH QUAN LY Phong Ban - Nhan vien **\n";
        cout << "**1. Nhap cac Phong ban **\n";
        cout << "**2. In ket qua ds phong ban va Nhan vien **\n";
        cout << "**0. Thoat **\n";
        cout << "****************************************************\n";
        cout << "**            Nhap lua chon cua ban               **\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Ban da chon nhap danh sach so phong ban nhan vien\n";
            cout << "Nhap so phong ban: ";
            cin >> soPB;
            PB.resize(soPB + 1);
            for (int i = 1; i <= soPB; ++i)
            {
                cout << "Nhap thong tin phong ban thu " << i << ":\n";
                cout << "\t  Ten phong ban:";
                cin.ignore();
                getline(cin, PB[i].TenPB);
                cout << "\t  Dia chi:";
                cin.ignore();
                getline(cin, PB[i].DiaChi);
                cout << "\t  Luong toi thieu: ";
                cin >> PB[i].LuongToiThieu;
                cout << "\t  So nhan vien: ";
                cin >> PB[i].SoNhanVien;
                cout << "\t  Nhap ds Nhan vien:\n";
                PB[i].NV.resize(PB[i].SoNhanVien + 1);
                for (int j = 1; j <= PB[i].SoNhanVien; ++j)
                {
                    cout << "\t\tNhan vien thu " << j << ":\n";
                    cout << "\t\t\tMaNV: ";
                    cin.ignore();
                    getline(cin, PB[i].NV[j].MaNV);
                    cout << "\t\t\tHo ten Nhan vien: ";
                    cin.ignore();
                    getline(cin, PB[i].NV[j].HoTen);
                    cout << "\t\t\tNhap Nam sinh: ";
                    cin >> PB[i].NV[j].NamSinh;
                    cout << "\t\t\tNhap HS Luong: ";
                    cin >> PB[i].NV[j].HSLuong;
                    cout << "\t\t\tNhap Chuc danh: ";
                    cin.ignore();
                    getline(cin, PB[i].NV[j].ChucDanh);
                    PB[i].NV[j].PhuCap = phucap[PB[i].NV[j].ChucDanh];
                    PB[i].NV[j].Luong = PB[i].NV[j].HSLuong * PB[i].LuongToiThieu + PB[i].NV[j].PhuCap;
                    PB[i].TongLuong += PB[i].NV[j].Luong;
                    PB[i].TongCDPhi += PB[i].NV[j].Luong * 0.01;
                }
            }
            cout << "Ban da nhap thanh cong!\n";
            cout << "Bam phim bat ky de tiep tuc!\n";
            getchar();
        }
        else if (choice == 2)
        {
            cout << "Ban da chon in xuat DS phong ban\n";
            cout << "-----------------------------------------------------------------------------------\n";
            for (int i = 1; i <= soPB; ++i)
            {
                cout << "\t\t  Ten phong ban: %s\n", PB[i].TenPB;
                cout << "\t\t  Dia chi: %s\n", PB[i].DiaChi;
                cout << "\t\t  Luong TT: %lf\n", PB[i].LuongToiThieu;
                cout << "\t\t  Tong Luong PB: %lf\n", PB[i].TongLuong;
                cout << "\t\t  Tong CD Phi: %lf\n", PB[i].TongCDPhi;
                cout << "\t\t  Bang Luong Nhan vien:\n";
                cout << "\t\tMaNV\tHoTenNV\tChucdanh\tPCCD\tHesoL\tLuong\tCDP\tCon nhan\n";
                for (int j = 1; j <= PB[i].SoNhanVien; ++j)
                {
                    printf("\t\t%s\t%s\t%s\t%d\t%lf\t%lf\t%lf\t%lf\n", PB[i].NV[j].MaNV, PB[i].NV[j].HoTen, PB[i].NV[j].ChucDanh, PB[i].NV[j].PhuCap, PB[i].NV[j].HSLuong, PB[i].NV[j].Luong, PB[i].NV[j].Luong * 0.01, PB[i].NV[j].Luong - PB[i].NV[j].Luong * 0.01);
                }
                cout << "-----------------------------------------------------------------------------------\n";
            }
            cout << "Bam phim bat ky de tiep tuc!\n";
            getchar();
        }
        else if (choice == 0)
        {
            cout << "Ban da chon thoat chuong trinh\n";
            break;
        }
        else
        {
            cout << "Nhap sai, vui long nhap lai\n";
        }
    }
    return 0;
}