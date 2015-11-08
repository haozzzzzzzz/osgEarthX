#ifndef OSGEARTHX_COM_FEATURE_SOURCE_OGR_IDL_H
#define OSGEARTHX_COM_FEATURE_SOURCE_OGR_IDL_H 1

#include <COM/Source/FeatureSource/IFeatureSouceDispatch_idl.h>

const INT IFeatureSourceOGRIdsCount = 1;
const INT IFeatureSourceOGRBeginId = IFeatureSourceDispatchBeginId + IFeatureSourceDispatchIdsCount;

[
	object,
	uuid(21DEF583-A689-4CCF-8781-18C8DD9FF96E),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IFeatureSourceOGR : IFeatureSourceDispatch{
	[ id( IFeatureSourceOGRBeginId + 1 ), helpstring( "…Ë÷√strUrl" ), propput ] HRESULT url( [ in ] BSTR strUrl );
	[ id( IFeatureSourceOGRBeginId + 1 ), helpstring( "ªÒ»°strUrl" ), propget ] HRESULT url( [ out, retval ] BSTR* pUrl );
};

#endif