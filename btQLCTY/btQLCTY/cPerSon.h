#pragma once
#include<string>
#include<iostream>
using namespace std;
class cPerSon
{
protected:
	string strTen;
	string strSdt;
	string strNgaySinh;
	string strDiaChi;
	bool bGioiTinh;
public:
	string GetTen();
	string GetSdt();
	string GetNgaySinh();
	string GetDiaChi();
	bool GetGioiTinh();
	cPerSon();
	virtual void Nhap();
	virtual void Xuat();
	virtual string *GetSkill()=0;
	virtual int GetSoSkill()=0;
	virtual int GetLv() = 0;
	~cPerSon();
};

