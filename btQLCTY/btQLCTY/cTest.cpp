#include "cTest.h"



cTest::cTest()
{
}

void cTest::Xuat()
{
	cPerSon::Xuat();
	for (int i = 0; i < iSoSkill; i++)
	{
		cout << "\nskill" << i + 1 << ": " << iSkill[i];
	}
	cout << "\n Level: " << iLv;
}


int cTest::GetLv()
{
	return iLv;
}

string *cTest::GetSkill()
{
	return iSkill;
}

int cTest::GetSoSkill()
{
	return iSoSkill;
}

void cTest::Nhap()
{
	cPerSon::Nhap();
	cout << "\nNhap level ";
	cin >> iLv;
	cout << "\nNhap so skill ";
	cin >> iSoSkill;
	for (int i = 0; i < iSoSkill; i++)
	{
		cout << "\nNhap skill " << i + 1;
		cin.ignore();
		getline(cin, iSkill[i]);
	}
}

cTest::~cTest()
{
}
