#include "NhanVienSanXuat.h"



NhanVienSanXuat::NhanVienSanXuat()
{
	iLuongCanBan = 0;
	iSoSanPham = 0;
}

NhanVienSanXuat::NhanVienSanXuat(string Ten,string Ngaysinh,int luongcoban,int sosp):NhanVien(Ten,Ngaysinh)
{
	iLuongCanBan = luongcoban;
	iSoSanPham = sosp;
	iLuong = iLuongCanBan + iSoSanPham * 5;
}

void NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "Luong co ban: \n";
	cin >> iLuongCanBan;
	cout << "So san pham : \n";
	cin >> iSoSanPham;
	iLuong = iLuongCanBan + iSoSanPham * 5000;
}

void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "Luong can ban : " << iLuongCanBan << "\n";
	cout << "So san pham : " << iSoSanPham << "\n";
}

NhanVienSanXuat::~NhanVienSanXuat()
{
}
