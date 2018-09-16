#include "cNguoi.h"



cNguoi::cNguoi()
{
	strHoTen = "\0";
	strNgaySinh = "\0";
	strNoiO = "\0";
	bGioiTinh = 0;
}

cNguoi::cNguoi(string ten, string ngaysinh, string noio, bool gioitinh)
{
	strHoTen = ten;
	strNgaySinh = ngaysinh;
	strNoiO = noio;
	bGioiTinh = gioitinh;
}

void cNguoi::Nhap()
{
	cout << "Nhap ten: \n";
	cin.ignore();
	getline(cin,strHoTen);
	cout << "Ngay sinh: \n";
	cin.ignore();
	getline(cin, strNgaySinh);
	cout << "Noi o: \n";
	cin.ignore();
	getline(cin, strNoiO);
	cout << "Gioi tinh:(1-Nam,0-Nu) \n";
	cin >> bGioiTinh;
}
void cNguoi::Xuat()
{
	cout << "Ho ten: " << strHoTen << "\n";
	cout << "Ngay sinh: " << strNgaySinh << "\n";
	cout << "Noi o: " << strNoiO << "\n";
	if (bGioiTinh)
	{
		cout << "Gioi tinh : Nam\n";
	}
	else
	{
		cout << "Gioi tinh: Nu\n";
	}
}

cNguoi::~cNguoi()
{
}
