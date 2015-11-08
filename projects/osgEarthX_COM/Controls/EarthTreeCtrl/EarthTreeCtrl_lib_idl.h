#ifndef EARTH_TREE_CTRL_LIB_IDL_H
#define EARTH_TREE_CTRL_LIB_IDL_H 1

[
	uuid(DE0B6BEB-E4A2-405E-8B90-86230C5514B3)		
]
dispinterface _IEarthTreeCtrlEvents
{
properties:
methods:
};
[
	uuid(07D658FB-58CA-4106-9BA7-A94C1CD4603F),		
	control
]
coclass EarthTreeCtrl
{
	[default] interface IEarthTreeCtrl;
	[default, source] dispinterface _IEarthTreeCtrlEvents;
};

#endif