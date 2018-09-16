#pragma once
#include "NhanVien.h"
class NhanVienVanPhong :
	public NhanVien
{
private:
	int iSoNgayLamViec;
public:
	void Nhap();
	void Xuat();
	NhanVienVanPhong();
	NhanVienVanPhong(string,string,int);
	~NhanVienVanPhong();
};

