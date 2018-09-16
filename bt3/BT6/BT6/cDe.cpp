#include "cDe.h"



cDe::cDe()
{
	iSoLuong = 0;
	iSua = 0;
	strTiengKeu = "E e e";
}

void cDe::Nhap()
{
	cout << "Nhap so luong de: \n";
	cin >> iSoLuong;
	iSua = 0;
	strTiengKeu = "E e e";
}

void cDe::Xuat()
{
	cout << "So luong de: " << iSoLuong << " con\n";
	cout << "So luong sua de: " << iSua << " lit\n";
}
cDe::cDe(int soluong) :cGiaSuc(soluong)
{
	strTiengKeu = "E e e";
}

void cDe::SinhCon()
{
	int s = 0;
	for (int i = 0; i < iSoLuong; i++)
	{
		s = s + rand();
	}
	iSoLuong = iSoLuong + s;
}

void cDe::Doi()
{
	cout << strTiengKeu << "\n";
}

void cDe::ChoSua()
{
	int s = 0;
	for (int i = 0; i < iSoLuong; i++)
	{
		s = s + rand() % 11;
	}
	iSua = iSua + s;
}

cDe::~cDe()
{
}
