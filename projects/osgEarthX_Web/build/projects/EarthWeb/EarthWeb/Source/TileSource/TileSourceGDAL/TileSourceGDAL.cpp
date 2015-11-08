#include <EarthWeb/Source/TileSource/TileSourceGDAL/TileSourceGDAL.h>
#include <atlstr.h>

std::wstring TileSourceGDAL::get_url()
{
	return ( std::wstring ) CString( getOrCreateInnerObject()->url().get().getString().data() );
}

void TileSourceGDAL::put_url( const std::wstring& strUrl )
{
	getOrCreateInnerObject()->url() = CStringA( strUrl.data() ).GetString();
}