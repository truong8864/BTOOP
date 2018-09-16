#include "cChiPheo.h"

cChiPheo::cChiPheo()
{
	iSoChai = 0;
}

cChiPheo::cChiPheo(int sochai)
{
	iSoChai = iSoChai;
}

void cChiPheo::Nhap()
{
	cout << "Nhap so chai ma Chi Pheo da dap: \n";
	cin >>iSoChai ;
	a = new cChai*[iSoChai];
	for (int i = 0; i < iSoChai; i++)
	{
		int loaichai;
		do
		{
			cout << "Nhap loai chai thu "<<i+1<<" :\n 1: (Chai Hinh Chu Nhat)\t 2: (Chai Hinh Tru Tron)\t 3: (Chai Hinh Lap Phuong)\n";
			cin >> loaichai;

		} while (loaichai != 1 && loaichai != 2 && loaichai!=3);
		switch (loaichai)
		{
		case 1:
		{
			int chieudai,chieurong,chieucao;
			cout << "Nhap chieu cao chai:\n";
			cin >> chieucao;
			cout << "Nhap chieu dai chai:\n";
			cin >> chieudai;
			cout << "Nhap chieu rong chai:\n";
			cin >> chieurong;
			a[i] = new cChaiHinhChuNhat(chieucao,chieudai,chieurong);
			break;
		}
		case 2:
		{
			int chieucao;
			int bankinh;
			cout << "Nhap chieu cao chai:\n";
			cin >> chieucao;
			cout << "Nhap ban kinh chai:\n";
			cin >> bankinh;
			a[i] = new cChaiHinhTruTron(chieucao,bankinh);
			break;
		}
		case 3:
		{
			int chieucao;
			cout<<"Nhap chieu cao chai\n";
			cin >> chieucao;
			a[i] = new cChaiHinhLapPhuong(chieucao);
		}
		default:
			break;
		}
		
	}
}

long cChiPheo::DienTichManhVo()
{
	long tong=0;
	for (int i = 0; i < iSoChai; i++)
	{
		tong = tong + a[i]->DienTich();
	}
	return tong;
}

float cChiPheo::TheTichNuocConLai()
{
	long tong=0;
	for (int i = 0; i < iSoChai; i++)
	{
		tong = tong + a[i]->TheTich();
	}
	return (float)(tong * 0.1);
}

void cChiPheo::DapChai()
{
	cout << "Dien tich manh vo la :" << DienTichManhVo()<<"\n";
	cout << "Luong nuoc con lai tren mat dat la :" << TheTichNuocConLai() << "\n";
}

cChiPheo::~cChiPheo()
{
}
