#pragma once
#include "cDiem.h"
class cHinhElip :
	public cDiem
{
private:
	int iBanKinhLon;
	int iBanKinhNho;
public:
	void Nhap();
	void Xuat();
	cHinhElip();
	cHinhElip(int ,int ,int ,int);
	~cHinhElip();
};

