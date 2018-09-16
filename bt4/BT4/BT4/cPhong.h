#pragma once
#include<iostream>
#include<string>
using namespace std;
class cPhong
{
protected:
	string strMaPhong;
	int iSoDem;
	long iDoanhThuThangTruoc;
public:
	cPhong();
	cPhong(string, int,long);
	string LayMaPhong();
	long DoanhThuThangTruoc();
	virtual int DoanhThu();
	~cPhong();
};

