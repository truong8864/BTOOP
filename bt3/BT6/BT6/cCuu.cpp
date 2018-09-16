#include "cCuu.h"



cCuu::cCuu()
{
	iSoLuong = 0;
	iSua = 0;
	strTiengKeu = "Be be be";
}

void cCuu::Nhap()
{
	cout << "Nhap so luong cuu: \n";
	cin >> iSoLuong;
	iSua = 0;
	strTiengKeu = "Be be be";
}

void cCuu::Xuat()
{
	cout << "So luong cuu: " << iSoLuong << " con\n";
	cout << "So luong sua cuu: " << iSua << " lit\n";
}
cCuu::cCuu(int soluong) :cGiaSuc(soluong)
{
	strTiengKeu = "Be be be";
}

void cCuu::SinhCon()
{
	int s = 0;
	for (int i = 0; i < iSoLuong; i++)
	{
		s = s + rand();
	}
	iSoLuong = iSoLuong + s;
}

void cCuu::Doi()
{
	cout << strTiengKeu << "\n";
}

void cCuu::ChoSua()
{
	int s = 0;
	for (int i = 0; i < iSoLuong; i++)
	{
		s = s + rand() % 6;
	}
	iSua = iSua + s;
}

cCuu::~cCuu()
{
}
