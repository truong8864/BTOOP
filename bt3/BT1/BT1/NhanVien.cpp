#include "NhanVien.h"



NhanVien::NhanVien()
{
	strHoTen = "\0";
	strNgaySinh = "\0";
	iLuong = 0;
}


NhanVien::NhanVien(string Ten,string NgaySinh)
{
	strHoTen = Ten;
	strNgaySinh = NgaySinh;
	iLuong = 0;
}

void NhanVien::Nhap()
{
	cout << "Nhap ho ten cua nhan vien :\n";
	getline(cin,strHoTen);
	cout << "Ngay sinh :\n";
	getline(cin, strNgaySinh);
	iLuong = 0;
}

void NhanVien::Xuat()
{
	cout << "Nhan vien : " << strHoTen << "\n";
	cout << "Ngay sinh : "<<strNgaySinh<<"\n";
	cout << "Luong : " << iLuong << "\n";
}
NhanVien::~NhanVien()
{
}
