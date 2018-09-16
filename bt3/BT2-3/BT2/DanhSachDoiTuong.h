#pragma once
#include"cCaNgheSi.h"
#include"cSinhVien.h"
#include"cCongNhan.h"
#include"cNguoi.h"
#include"cHocSinh.h"
class DanhSachDoiTuong
{
private:
	int *iLoaiDoiTuong;
	cNguoi **DanhSach;
	int iSoLuong;
public:
	void Nhap();
	void Xuat();
	DanhSachDoiTuong();
	~DanhSachDoiTuong();
};

