#pragma once
#include<iostream>
using namespace std;
class cDiem
{
protected:
	int iHoanhDo;
	int iTungDo;
public:
	cDiem();
	cDiem(int ,int);
	virtual void Nhap();
	virtual void Xuat();
	~cDiem();
};

