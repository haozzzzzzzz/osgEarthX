/**
	@brief LabelNode Provider
	@author Hao Luo
	@date 2015/10/22
*/

#ifndef OSGEARTHX_CORE_LABEL_PROVIDER_H
#define OSGEARTHX_CORE_LABEL_PROVIDER_H 1

#include <osgEarthXCoreExport/Export.h>
#include <osgEarthAnnotation/LabelNode>

namespace osgEarthXCore
{

	class OSGEARTHX_CORE_EXPORT LabelProvider : 
		public osgEarth::Annotation::LabelNode
	{
	public:
		LabelProvider();

		void setLocalText( const std::string& str );
		void setUnicodeText( const std::string& str );

		std::string getText();

	protected:
		virtual ~LabelProvider();

	private:
	};
}

#endif