#pragma once
#include "cPerSon.h"
class cTest :
	public cPerSon
{
private:
	int iSoSkill;
	string *iSkill;
	int iLv;
public:
	cTest();
	void Nhap();
	int GetLv();
	string *GetSkill();
	int GetSoSkill();
	void Xuat();
	~cTest();
};

