#ifndef OSGEARTHX_WEB_TILE_SOURCE_NOISE_H
#define OSGEARTHX_WEB_TILE_SOURCE_NOISE_H 1


#include <EarthWeb/Source/SourceDispatchImpl.h>
#include <EarthWeb/Source/TileSource/ITileSourceDispath.h>

#include <osgEarthDrivers/noise/NoiseOptions>

#define TileSourceNoiseDispatchImpl SourceDispatchImpl< osgEarth::Drivers::Noise::NoiseOptions, TileSourceNoise, ITileSourceDispatch >

FB_FORWARD_PTR(TileSourceNoise)
class TileSourceNoise : 
	public TileSourceNoiseDispatchImpl
{
public:
	TileSourceNoise( const std::vector<FB::variant>* pArgs = NULL ) : TileSourceNoiseDispatchImpl( TILE_SOURCE_NOISE )
	{

	}

	virtual ~TileSourceNoise(){}

protected:
private:
};


#endif