#pragma once
#include<iostream>
#include<string>
using namespace std;
class cNguoi
{
protected:
	string strHoTen;
	string strNgaySinh;
	string strNoiO;
	bool bGioiTinh;
public:
	cNguoi(string, string,string,bool);
	void Nhap();
	void Xuat();
	cNguoi();
	~cNguoi();
};

