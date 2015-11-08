#include <Provider/AnnotationProvider/ImageProvider.h>
using namespace osgEarthXCore;

#include <osgDB/ReadFile>

void ImageProvider::setImageSrc( std::string strSrc )
{
	_setImage( osgDB::readImageFile( strSrc ) );
}