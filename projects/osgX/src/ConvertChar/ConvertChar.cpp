#include <ConvertChar/ConvertChar.h>
using namespace osgX;

#if defined(WIN32) && !defined(__CYGWIN__)
	#define USE_WIN32_CHAR_CONVERT
	#include <windows.h>
#endif

std::string ConvertChar::convertLocalStrToUTF8Str( const std::string& str, LocalTextCoding localTextCoding /* = DEFAULT_LOCAL_TEXT_CODING */ )
{
	std::string strUTF8;
	switch( localTextCoding )
	{
	case LocalTextCoding::GB2312:
		strUTF8 = convertGb2312ToUTF8( str );
		break;
	default:
		break;
	}
	return strUTF8;
}

std::string ConvertChar::convertUnicodeToUTF8( const std::wstring& wstr )
{
	std::string str;

#if defined( USE_WIN32_CHAR_CONVERT )
	int n = WideCharToMultiByte( CP_UTF8, 0, wstr.c_str(), -1, 0, 0, 0, 0 );
	str.resize( n );
	WideCharToMultiByte( CP_UTF8, 0, wstr.c_str(), -1, ( char* )str.c_str(), str.length(), 0, 0 );
#endif

	return str;
}

std::wstring ConvertChar::convertGb2312ToUnicode( const std::string& str )
{
	std::wstring wstr;

#if defined( USE_WIN32_CHAR_CONVERT )
	int n = MultiByteToWideChar( CP_ACP, 0, str.c_str(), -1, 0, 0 );
	wstr.resize( n );
	MultiByteToWideChar( CP_ACP, 0, str.c_str(), -1, ( wchar_t * ) wstr.c_str(), wstr.length() );
#endif

	return wstr;
}

std::string ConvertChar::convertGb2312ToUTF8( const std::string& str )
{
	return convertUnicodeToUTF8( convertGb2312ToUnicode( str ) );
}