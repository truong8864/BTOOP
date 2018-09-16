#pragma once
#include "NhanVien.h"
class NhanVienSanXuat :
	public NhanVien
{
private:
	int iLuongCanBan;
	int iSoSanPham;
public:
	void Nhap();
	void Xuat();
	NhanVienSanXuat();
	NhanVienSanXuat(string,string,int,int);
	~NhanVienSanXuat();
};

