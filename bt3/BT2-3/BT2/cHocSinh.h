#pragma once
#include "cNguoi.h"
class cHocSinh :
	public cNguoi
{
private:
	string strTruong;
	int iLop;
public:
	void Nhap();
	void Xuat();
	cHocSinh(string,string,string,bool,string,int);
	cHocSinh();
	~cHocSinh();
};

