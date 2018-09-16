#pragma once
#include "cNguoi.h"
class cCongNhan :
	public cNguoi
{
private:
	string strNoiLamViec;
	int iLuong;
public:
	cCongNhan(string,string,string,bool,string,int);
	cCongNhan();
	void Nhap();
	void Xuat();
	~cCongNhan();
};

