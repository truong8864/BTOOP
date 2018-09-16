#include "cPhongBusiness.h"



cPhongBusiness::cPhongBusiness()
{
}

cPhongBusiness::cPhongBusiness(string maphong,int sodem,long doanhthuthangtruoc):cPhong(maphong,sodem,doanhthuthangtruoc)
{

}

int cPhongBusiness::DoanhThu()
{
	return (int)(iSoDem * 300000);
}

cPhongBusiness::~cPhongBusiness()
{
}
