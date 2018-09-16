#include "cDev.h"



cDev::cDev()
{
}

void cDev::Xuat()
{
	cPerSon::Xuat();
	for (int i = 0; i < iSoSkill; i++)
	{
		cout << "\nskill" << i + 1 << ": " << iSkill[i];
	}
	cout << "\nLevel: "<<iLv;
}


int cDev::GetLv()
{
	return iLv;
}

string *cDev::GetSkill()
{
	return iSkill;
}

int cDev::GetSoSkill()
{
	return iSoSkill;
}

void cDev::Nhap()
{
	cPerSon::Nhap();
	cout << "\nNhap level ";
	cin >> iLv;
	cout << "\nNhap so skill ";
	cin >> iSoSkill;
	iSkill = new string[iSoSkill];
	for (int i = 0; i < iSoSkill; i++)
	{
		cout << "\nNhap skill " << i + 1;
		cin.ignore(); 
		getline(cin,iSkill[i]);
	}
}

cDev::~cDev()
{
}
