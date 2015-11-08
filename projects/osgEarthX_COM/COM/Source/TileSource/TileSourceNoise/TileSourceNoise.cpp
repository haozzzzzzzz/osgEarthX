// TileSourceNoise.cpp : CTileSourceNoise µÄÊµÏÖ

#include "stdafx.h"
#include "TileSourceNoise.h"


// CTileSourceNoise

STDMETHODIMP CTileSourceNoise::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITileSourceNoise,
		&IID_ITileSourceDispatch,
		&IID_ISourceDispatch,
		&IID_IEarthDispatch
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

//ITileSourceNoise
STDMETHODIMP CTileSourceNoise::put_resolution( DOUBLE dResolution )
{
	getOrCreateInnerObject()->resolution() = dResolution;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_scale( DOUBLE dScale )
{
	getOrCreateInnerObject()->scale() = dScale;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_bias( DOUBLE dBias )
{
	getOrCreateInnerObject()->bias() = dBias;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_octaves( INT iOctaves )
{
	getOrCreateInnerObject()->octaves() = iOctaves;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_frequency( DOUBLE dFrequency )
{
	getOrCreateInnerObject()->frequency() = dFrequency;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_persistence( DOUBLE dPersistence )
{
	getOrCreateInnerObject()->persistence() = dPersistence;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_lacunarity( DOUBLE dLacunarity )
{
	getOrCreateInnerObject()->lacunarity() = dLacunarity;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_seed( INT iSeed )
{
	getOrCreateInnerObject()->seed() = iSeed;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_normalMap( VARIANT_BOOL bNormalMap )
{
	getOrCreateInnerObject()->normalMap() = bNormalMap == VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_minElevation( FLOAT fMinElevation )
{
	getOrCreateInnerObject()->minElevation() = fMinElevation;
	return S_OK;
}

STDMETHODIMP CTileSourceNoise::put_maxElevation( FLOAT fMaxElevation )
{
	getOrCreateInnerObject()->maxElevation() = fMaxElevation;
	return S_OK;
}