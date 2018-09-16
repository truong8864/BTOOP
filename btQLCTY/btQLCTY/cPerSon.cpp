#include "cPerSon.h"



cPerSon::cPerSon()
{

}

string cPerSon::GetTen()
{
	return strTen;
}

string cPerSon::GetDiaChi()
{
	return strDiaChi;
}

string cPerSon::GetNgaySinh()
{
	return strNgaySinh;
}

string cPerSon::GetSdt()
{
	return strSdt;
}

bool cPerSon::GetGioiTinh()
{
	return bGioiTinh;
}

void cPerSon::Nhap()
{
	cin.ignore();
	cout << "\nNhap ten: ";
	getline(cin,strTen);
	cout << "\nNhap SDT: ";
	cin.ignore();
	getline(cin, strSdt); 
	cout << "\nNhap Dia chi: ";
	cin.ignore();
	getline(cin,strDiaChi);
	cout << "\nNhap ngay sinh: ";
	cin.ignore();
	getline(cin,strNgaySinh);
	cout << "\nNhap gioi tinh 1(Nam)-0(Nu)";
	cin >> bGioiTinh;
}

void cPerSon::Xuat()
{
	cout << "\n" << strTen;
	cout << "\n" << strSdt;
	cout << "\n" << strNgaySinh;
	cout << "\n" << strDiaChi;
	if (bGioiTinh == 1)
	{
		cout << "\n Nam";
	}
	else
	{
		cout << "\n Nu";
	}
}
cPerSon::~cPerSon()
{
}
