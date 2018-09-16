#pragma once
#include "cNguoi.h"
class cCaNgheSi :
	public cNguoi
{
	string strNgheDanh;
	string strLinhVucCHuyenMon;
public:
	cCaNgheSi();
	cCaNgheSi(string ,string,string,bool,string,string);
	void Nhap();
	void Xuat();
	~cCaNgheSi();
};

