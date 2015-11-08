#include <EarthWeb/Source/FeatureSource/FeatureSourceOGR/FeatureSourceOGR.h>
#include <atlstr.h>

std::wstring FeatureSourceOGR::get_url()
{
	return ( std::wstring ) CString( getOrCreateInnerObject()->url().get().getString().data() );
}

void FeatureSourceOGR::put_url( const std::wstring& strUrl )
{
	getOrCreateInnerObject()->url() = CStringA( strUrl.data() ).GetString();
}