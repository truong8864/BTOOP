#include "cPhongPremium.h"



cPhongPremium::cPhongPremium()
{
	iPhiDichVu = 0;
}

cPhongPremium::cPhongPremium(string maphong,int sodem,int phidichvu,long doanhthuthangtruoc):cPhong(maphong,sodem,doanhthuthangtruoc)
{
	iPhiDichVu = phidichvu;
}

int cPhongPremium::DoanhThu()
{
	return (int)(iSoDem*500000+iPhiDichVu)*1.05;
}

cPhongPremium::~cPhongPremium()
{
}
