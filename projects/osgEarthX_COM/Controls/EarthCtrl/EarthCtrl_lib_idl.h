#ifndef EARTH_CTRL_LIB_IDL_H
#define EARTH_CTRL_LIB_IDL_H 1

[
	uuid(4DCD640C-CD17-4192-B28E-B0E0D234A40C)		
]
dispinterface _IEarthCtrlEvents
{
properties:
methods:
};
[
	uuid(41CEF06B-7E2B-4422-A166-CF8DDC575CA7),		
	control
]
coclass EarthCtrl
{
	[default] interface IEarthCtrl;
	[default, source] dispinterface _IEarthCtrlEvents;
};

#endif