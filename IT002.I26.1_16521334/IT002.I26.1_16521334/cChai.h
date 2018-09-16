#pragma once
#include<iostream>
using namespace std;
class cChai
{
protected:
	int iChieuCao;
public:
	cChai();
	cChai(int);
	virtual int DienTich()=0;
	virtual int TheTich()=0;
	~cChai();
};


