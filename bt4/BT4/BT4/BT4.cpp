#include"cPhong.h"
#include"cPhongBusiness.h"
#include"cPhongDuluxe.h"
#include"cPhongPremium.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;
void main()
{
	int d, p, b,soluong,sophongvuottroi=0;
	int dem = 0;
	cPhong **a;
	long tongd = 0, tongp = 0, tongb = 0;
	string maphong;
	int sodem, phidichvu, phiphucvu;
	long doanhthuthangtruoc;
	ifstream in;
	ofstream out;
	in.open("sofitel.inp");
	in >> d >> p >> b;
	soluong = d + p + b;
	a = new cPhong*[soluong];
	for (int i = 0; i < d; i++)
	{
		in >> maphong >> sodem >> phidichvu >> phiphucvu>>doanhthuthangtruoc;
		a[dem] = new cPhongDuluxe(maphong,sodem,phidichvu,phiphucvu,doanhthuthangtruoc);
		tongd =tongd+ a[dem]->DoanhThu();
		dem++;
	}

	for (int i = 0; i < p; i++)
	{
		in >> maphong >> sodem >> phidichvu>>doanhthuthangtruoc;
		a[dem] = new cPhongPremium(maphong, sodem, phidichvu,doanhthuthangtruoc);
		tongp = tongp+a[dem]->DoanhThu();
		dem++;
	}

	for (int i = 0; i < b; i++)
	{
		in >> maphong >> sodem>>doanhthuthangtruoc ;
		a[dem] = new cPhongBusiness(maphong, sodem,doanhthuthangtruoc);
		tongb = tongb+a[dem]->DoanhThu();
		dem++;
	}

	in.close();
	out.open("sofitel.out");
	out << d << " " << p << " " << b << "\n";
	out << tongd << "\n";
	out << tongp << "\n";
	out << tongb << "\n";
	for (int i = 0; i < dem; i++)
	{
		if ((a[i]->DoanhThu()) >= (a[i]->DoanhThuThangTruoc()))
		{
			sophongvuottroi++;
		}
	}
	out << sophongvuottroi << "\n";

	for (int i = 0; i < dem; i++)
	{
		if ((a[i]->DoanhThu()) >= (a[i]->DoanhThuThangTruoc()))
		{
			out << a[i]->LayMaPhong() << "\n";
		}
	}
	out.close();
	system("pause");
}