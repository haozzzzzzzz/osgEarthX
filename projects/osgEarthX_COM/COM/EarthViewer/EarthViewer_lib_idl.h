#ifndef EARTH_VIEWER_LIB_IDL_H
#define EARTH_VIEWER_LIB_IDL_H 1

[
	uuid(A34A90F4-722C-4ADF-88BB-D9F363D25DCF)		
]
dispinterface _IEarthViewerEvents
{
properties:
methods:
};
[
	uuid(FD019183-F764-4213-8DB4-A27199418BD1)		
]
coclass EarthViewer
{
	[default] interface IEarthViewer;
	[default, source] dispinterface _IEarthViewerEvents;
};

#endif