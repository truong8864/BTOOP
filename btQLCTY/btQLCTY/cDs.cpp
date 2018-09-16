#include "cDs.h"
#include<fstream>



cDs::cDs()
{
}

void cDs::Nhap()
{
	cout << "\nNhap so luong person: ";
	cin >> iSoLuong;
	A = new cPerSon*[iSoLuong];
	iLoai = new int[iSoLuong];
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "\nNhap person" << i + 1;
		cout << "\nNhap loai : 1(Dev)-2(Test)-3(Pm)";
		cin >> iLoai[i];
		switch (iLoai[i])
		{
		case 1:
		{
			A[i] = new cDev;
			A[i]->Nhap();
			break;
		}
		case 2:
		{
			A[i] = new cTest;
			A[i]->Nhap();
			break;
		}
		case 3:
		{
			A[i] = new cPm;
			A[i]->Nhap();
			break;
		}
		default:
			break;
		}
	}
}

void cDs::Xuat()
{
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "\nNhap vien " << i + 1;
		switch (iLoai[i])
		{
		case 1:
		{
			cout << "\nDEV";
			A[i]->Xuat();
			break;
		}
		case 2:
		{
			cout << "\nTEST";
			A[i]->Xuat();
			break;
		}
		case 3:
		{
			cout << "\nPM";
			A[i]->Xuat();
			break;
		}
		default:
			break;
		}
	}
}

void cDs::TimKiem()
{
		cout << "\nNhap thong tin can tim: ";
		string loaiskill;
		int lvel;
		int loainv;
		cout << "\nNhap loai skill: ";
		cin.ignore();
		getline(cin,loaiskill);
		cout << "\nNhap loai nv 1(DEV)\t2(TEST)\t3(PM)";
		cin >> loainv;
		cout << "\nNhap level";
		cin >> lvel;
		for (int i = 0; i < iSoLuong; i++)
		{
			if (A[i]->GetLv()==lvel&&iLoai[i]==loainv)
			{
				for (int j = 0; j < A[i]->GetSoSkill(); j++)
				{
					if ((A[i]->GetSkill()[j] == loaiskill))
					{
						A[i]->Xuat();
					}
				}
			}
		}
		
	
}

void cDs::InText()
{
	ofstream out;
	out.open("sofitel.out");
	out << "\nSo luong: " << iSoLuong << "\n";
	for (int i = 0; i < iSoLuong; i++)
	{
		out << "\nNhan vien " << i + 1 << "\n";
		switch (iLoai[i])
		{
		case 1:
		{
			out << "loai : DEV\n";
			break;
		}
		case 2:
		{
			out << "loai : TEST\n";
			break;
		}case 3:
		{
			out << "loai : PM\n";
			break;
		}
		default:
			break;
		}
		out << "Ten :" << A[i]->GetTen() << "\n";
		out << "SDT :" << A[i]->GetSdt() << "\n";
		out << "Ngay sinh :" << A[i]->GetNgaySinh() << "\n";
		out << "Dia chi :" << A[i]->GetDiaChi() << "\n";
		if (A[i]->GetGioiTinh())
		{
			out << "Gioi tinh : Nam\n";
		}
		else
		{
			out << "Gioi tinh : Nu\n";
		}
		out << "Lv :" << A[i]->GetLv()<<"\n";
		out << "So skill : " << A[i]->GetSoSkill()<<"\n";
		for (int j = 0; j < A[i]->GetSoSkill(); j++)
		{
			cout << "Skill " << j + 1 << " " << A[i]->GetSkill()[j]<<"\n";
		}

	}
	out.close();
}


cDs::~cDs()
{}
//}
