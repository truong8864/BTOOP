#pragma once
#include"cPerSon.h"
#include"cDev.h"
#include"cPm.h"
#include"cTest.h"
class cDs
{
private:
	cPerSon **A;
	int iSoLuong;
	int *iLoai;
public:
	cDs();
	void Nhap();
	void Xuat();
	void TimKiem();
	void InText();
	~cDs();
};

