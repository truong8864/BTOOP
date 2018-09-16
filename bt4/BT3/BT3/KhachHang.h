#pragma once
#include<iostream>
#include<string>
using namespace std;
class KhachHang
{
protected:
	string strTenKhachHang;
	int iSoLuongHang;
	int iDonGiaHang;
public:
	 string Ten() ;
	virtual int TinhTien();
	KhachHang();
	KhachHang(string, int, int);
	~KhachHang();
};

