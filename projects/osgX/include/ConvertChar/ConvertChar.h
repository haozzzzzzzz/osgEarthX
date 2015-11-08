/**
	@brief convert char code
	@author Hao Luo
	@date 2015/10/22
*/

#ifndef OSGX_CONVERT_CHAR_H
#define OSGX_CONVERT_CHAR_H 1

#include <osgXExport/Export.h>

#include <string>

#if defined(__CYGWIN__) || defined(ANDROID)
namespace std
{
	typedef basic_string<wchar_t> wstring;
}
#endif

namespace osgX
{
	enum LocalTextCoding
	{
		GB2312
	};
	#define DEFAULT_LOCAL_TEXT_CODING LocalTextCoding::GB2312

	class OSGX_EXPORT ConvertChar
	{
	public:
		static std::string convertLocalStrToUTF8Str( const std::string& str, LocalTextCoding localTextCoding = DEFAULT_LOCAL_TEXT_CODING );

		static std::string convertUnicodeToUTF8( const std::wstring& wstr );
		static std::wstring convertGb2312ToUnicode( const std::string& str );
		static std::string convertGb2312ToUTF8( const std::string& str );

	protected:
	private:
	};
}

#endif