#include "NhanVienVanPhong.h"
#include"NhanVienSanXuat.h"

NhanVienVanPhong::NhanVienVanPhong()
{
	iSoNgayLamViec = 0;
}

NhanVienVanPhong::NhanVienVanPhong(string ten,string ngaysinh,int songaylamviec):NhanVien(ten,ngaysinh)
{
	iSoNgayLamViec = songaylamviec;
	iLuong = iSoNgayLamViec*100000;
}


void NhanVienVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "So ngay lam viec : \n";
	cin >> iSoNgayLamViec;
	iLuong =  iSoNgayLamViec*100000;
}

void NhanVienVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay lam viec : " << iSoNgayLamViec << "\n";
}
NhanVienVanPhong::~NhanVienVanPhong()
{
}

