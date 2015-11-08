#ifndef OSGEARTHX_COM_TILE_SOURCE_NOISE_IDL_H
#define OSGEARTHX_COM_TILE_SOURCE_NOISE_IDL_H 1

#include <COM/Source/TileSource/ITileSourceDispatch_idl.h>

const INT ITileSourceNoiseIdsCount = 11;
const INT ITileSourceNoiseBeginId = ITileSourceDispatchBeginId + ITileSourceDispatchIdsCount;

[
	object,
	uuid(F351EF1C-12AE-429E-BD65-CDFC384F314D),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface ITileSourceNoise : ITileSourceDispatch{
	[ id( ITileSourceNoiseBeginId + 1 ), propput, helpstring( "The linear distance ( usually meters ) over which to generate one cycle of noise data" ) ] 
	HRESULT resolution( [ in ] DOUBLE dResolution );

	[ id( ITileSourceNoiseBeginId + 2 ), propput, helpstring( "The amount of offset to apply to noise values within a cycle. The default is 1.0, which means you will get noise data between [ -1 ... 1 ]" ) ]
	HRESULT scale( [ in ] DOUBLE dScale );

	[ id( ITileSourceNoiseBeginId + 3 ), propput, helpstring( "Bias (offset) for elevation noise. elevation = bias + scale * [ -1 ... 1 ]" ) ]
	HRESULT bias( [ in ] DOUBLE dBias  );

	[ id( ITileSourceNoiseBeginId + 4 ), propput, helpstring( "Number of times to refine the noise data by adding levels detail, i.e. how deep the noise generator will recurse within the resolution span. A higher number will create more detail as you zoom in closer. Default is 4." ) ]
	HRESULT octaves( [ in ] INT iOctaves );

	[ id( ITileSourceNoiseBeginId + 5 ), propput, helpstring( "The base frequency of the noise generator." ) ]
	HRESULT frequency( [ in ] DOUBLE dFrequency  );

	[ id( ITileSourceNoiseBeginId + 6 ), propput, helpstring( "When using multiple octaves, the Persistence is the factor by which the \"scale\" of the noise function decreases with each successive octave. I.e.: Amp(Oct2) = Amp(Oct1) * Persistance.Default = 0.5." ) ]
	HRESULT persistence( [ in ] DOUBLE dPersistence  );

	[ id( ITileSourceNoiseBeginId + 7 ), propput, helpstring( "When using multiple octaves, Lacunarity is the factor by which frequency increases with each successive octave: I.e.: Freq(Oct2) = Freq(Oct1) * Lacunarity. Default = 2.0." ) ]
	HRESULT lacunarity( [ in ] DOUBLE dLacunarity  );

	[ id( ITileSourceNoiseBeginId + 8 ), propput, helpstring( "Seed value for the noise function's random number generator. Set this to ensure the exact same noise data each time you run." ) ]
	HRESULT seed( [ in ] INT iSeed  );

	[ id( ITileSourceNoiseBeginId + 9 ), propput, helpstring( "Whether to convert the image into a normal map (images only) Default = false." ) ]
	HRESULT normalMap( [ in ] VARIANT_BOOL bNormalMap  );

	[ id( ITileSourceNoiseBeginId + 10 ), propput, helpstring( "For height fields, clamp the minimum elevation to this value." ) ]
	HRESULT minElevation( [ in ] FLOAT fMinElevation  );

	[ id( ITileSourceNoiseBeginId + 11 ), propput, helpstring( "For height fields, clamp the maximum elevation to this value." ) ]
	HRESULT maxElevation( [ in ] FLOAT fMaxElevation  );

};

#endif