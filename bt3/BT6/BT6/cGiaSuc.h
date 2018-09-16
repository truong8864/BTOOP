#pragma once
#include<iostream>
#include<string>
using namespace std;

class cGiaSuc
{
protected:
	int iSua;
	int iSoLuong;
	string strTiengKeu;
public:
	cGiaSuc();
	virtual void Nhap()=0;
	virtual void Xuat() = 0;
	virtual void SinhCon()=0;
	virtual void ChoSua()=0;
	virtual void Doi()=0;
	cGiaSuc(int);
	~cGiaSuc();
};

