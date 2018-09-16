#include "cPhongDuluxe.h"



cPhongDuluxe::cPhongDuluxe()
{
	iPhiDichVu = 0;
	iPhiPhucVu = 0;
}

cPhongDuluxe::cPhongDuluxe(string maphong, int sodem, int phidichvu, int phiphucvu,long doanhthuthangtruoc):cPhong(maphong,sodem,doanhthuthangtruoc)
{
	iPhiDichVu = phidichvu;
	iPhiPhucVu = phiphucvu;
}

int cPhongDuluxe::DoanhThu()
{
	return (int)(iSoDem * 750000 + iPhiDichVu + iPhiPhucVu);
}

cPhongDuluxe::~cPhongDuluxe()
{
}
