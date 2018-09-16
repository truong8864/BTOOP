#include "cCongNhan.h"



cCongNhan::cCongNhan()
{
	strNoiLamViec = "\0";
	iLuong = 0;
}

cCongNhan::cCongNhan(string ten, string ngaysinh, string noio, bool gioitinh, string noilamviec, int luong) :cNguoi(ten, ngaysinh, noio, gioitinh)
{
	strNoiLamViec=noilamviec;
	iLuong = luong;
}

void cCongNhan::Nhap()
{
	cNguoi::Nhap();
	cout << "Noi lam viec: \n";
	cin.ignore();
	getline(cin, strNoiLamViec);
	cout << "Luong: \n";
	cin >> iLuong;
}

void cCongNhan::Xuat()
{
	cNguoi::Xuat();
	cout << "Noi lam viec: " << strNoiLamViec << "\n";
	cout << "Luong: " << iLuong << "\n";
}
cCongNhan::~cCongNhan()
{
}
