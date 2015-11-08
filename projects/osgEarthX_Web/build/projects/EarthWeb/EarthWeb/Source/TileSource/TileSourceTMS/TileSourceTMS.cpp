#include <EarthWeb/Source/TileSource/TileSourceTMS/TileSourceTMS.h>
#include <atlstr.h>

std::wstring TileSourceTMS::get_url()
{
	return ( std::wstring ) CString( getOrCreateInnerObject()->url().get().getString().data() );
}

void TileSourceTMS::put_url( const std::wstring& strUrl )
{
	getOrCreateInnerObject()->url() = CStringA( strUrl.data() ).GetString();
}