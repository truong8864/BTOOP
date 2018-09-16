#include <iostream>
#include <fstream>
#include<string>
#include"KhachHang.h"
#include"cKhachHangLoaiA.h"
#include"cKhachHangLoaiB.h"
#include"cKhachHangLoaiC.h"
using namespace std;
int main()
{
	KhachHang **a;
	int x, y, z;
	long tong=0;
	int soluong;
	int dem = 0;
	int soluonghang, dongia, namthanthiet;
	string ten;
	ifstream in;
	ofstream out;
	in.open("xyz.inp");/// Mo tap tin de doc ten xyz.inp
	in >> x >> y >> z;
	soluong = x + y + z;
	a = new (KhachHang*[soluong]);
	for (int i = 0; i < x; i++)///Khach Hang loai A
	{
		in >> ten;
		in >> soluonghang;
		in >> dongia;
		a[dem] = new cKhachHangLoaiA(ten, soluonghang, dongia);
		dem++;
	}

	for (int i = 0; i < y; i++)///Khach Hang loai B
	{
		in >> ten;
		in >> soluonghang;
		in >> dongia;
		in >> namthanthiet;
		a[dem] = new cKhachHangLoaiB(ten, soluonghang, dongia, namthanthiet);
		dem++;
	}

	for (int i = 0; i < z; i++)///Khach Hang loai C
	{
		in >> ten;
		in >> soluonghang;
		in >> dongia;
		a[dem] = new cKhachHangLoaiC(ten, soluonghang, dongia);
		dem++;
	}
	in.close();  /// Dong tap tin
	out.open("xyz.out");/// Mo tap tin de ghi ten 
	out << x << " " << y << " " << z << "\n";
	for ( int i = 0; i < dem; i++)
	{
		out << a[i]->Ten() <<"\n";
		out << a[i]->TinhTien() << "\n";
		tong = tong + a[i]->TinhTien();
	}
	out << tong;
	out.close();
	system("pause");
	return 0;
}
