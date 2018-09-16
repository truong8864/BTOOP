#pragma once
#include "cNguoi.h"
class cSinhVien :
	public cNguoi
{
private:
	int iNam;
	string strNienKhoa;
	string strTruong;
	string strNganh;
public:
	cSinhVien();
	cSinhVien(string ,string,string, bool,int,string,string,string);
	void Nhap();
	void Xuat();
	~cSinhVien();
};

