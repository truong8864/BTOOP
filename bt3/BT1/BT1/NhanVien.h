#pragma once
#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
protected :
	string strHoTen;
	string strNgaySinh;
	int iLuong;
public:
	void Nhap();
	void Xuat();
	NhanVien(string,string);
	NhanVien();
	~NhanVien();
};

