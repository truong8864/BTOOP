#pragma once
#include "cDiem.h"
class cHinhTron :
	public cDiem
{
private:
	int iBanKinh;
public:
	cHinhTron();
	cHinhTron(int,int,int);
	void Nhap();
	void Xuat();
	~cHinhTron();
};

