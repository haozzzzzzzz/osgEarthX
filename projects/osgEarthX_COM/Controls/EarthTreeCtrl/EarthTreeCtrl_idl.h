#ifndef EARTH_TREE_CTRL_IDL_H
#define EARTH_TREE_CTRL_IDL_H 1

#include <Controls/EarthCtrl/EarthCtrl_idl.h>

const INT IEarthTreeCtrlIdsCount = 1;
const INT IEarthTreeCtrlBeginId = 0;

[
	object,
	uuid(C7C822D0-440B-4F5E-BC3E-78D10DC3B084),
	dual,
	nonextensible,
	pointer_default(unique)
]
interface IEarthTreeCtrl : IDispatch{
	[id ( IEarthTreeCtrlBeginId + 1 ) ] HRESULT bindEarthCtrl( [ in ] IEarthCtrl* pIEarthCtrl );

	[propput, bindable, requestedit, id(DISPID_AUTOSIZE)]
	HRESULT AutoSize([in]VARIANT_BOOL vbool);
	[propget, bindable, requestedit, id(DISPID_AUTOSIZE)]
	HRESULT AutoSize([out,retval]VARIANT_BOOL* pbool);
	[propput, bindable, requestedit, id(DISPID_BACKCOLOR)]
	HRESULT BackColor([in]OLE_COLOR clr);
	[propget, bindable, requestedit, id(DISPID_BACKCOLOR)]
	HRESULT BackColor([out,retval]OLE_COLOR* pclr);
	[propput, bindable, requestedit, id(DISPID_BACKSTYLE)]
	HRESULT BackStyle([in]long style);
	[propget, bindable, requestedit, id(DISPID_BACKSTYLE)]
	HRESULT BackStyle([out,retval]long* pstyle);
	[propput, bindable, requestedit, id(DISPID_BORDERCOLOR)]
	HRESULT BorderColor([in]OLE_COLOR clr);
	[propget, bindable, requestedit, id(DISPID_BORDERCOLOR)]
	HRESULT BorderColor([out, retval]OLE_COLOR* pclr);
	[propput, bindable, requestedit, id(DISPID_BORDERSTYLE)]
	HRESULT BorderStyle([in]long style);
	[propget, bindable, requestedit, id(DISPID_BORDERSTYLE)]
	HRESULT BorderStyle([out, retval]long* pstyle);
	[propput, bindable, requestedit, id(DISPID_BORDERWIDTH)]
	HRESULT BorderWidth([in]long width);
	[propget, bindable, requestedit, id(DISPID_BORDERWIDTH)]
	HRESULT BorderWidth([out, retval]long* width);
	[propput, bindable, requestedit, id(DISPID_DRAWMODE)]
	HRESULT DrawMode([in]long mode);
	[propget, bindable, requestedit, id(DISPID_DRAWMODE)]
	HRESULT DrawMode([out, retval]long* pmode);
	[propput, bindable, requestedit, id(DISPID_DRAWSTYLE)]
	HRESULT DrawStyle([in]long style);
	[propget, bindable, requestedit, id(DISPID_DRAWSTYLE)]
	HRESULT DrawStyle([out, retval]long* pstyle);
	[propput, bindable, requestedit, id(DISPID_DRAWWIDTH)]
	HRESULT DrawWidth([in]long width);
	[propget, bindable, requestedit, id(DISPID_DRAWWIDTH)]
	HRESULT DrawWidth([out, retval]long* pwidth);
	[propput, bindable, requestedit, id(DISPID_FILLCOLOR)]
	HRESULT FillColor([in]OLE_COLOR clr);
	[propget, bindable, requestedit, id(DISPID_FILLCOLOR)]
	HRESULT FillColor([out, retval]OLE_COLOR* pclr);
	[propput, bindable, requestedit, id(DISPID_FILLSTYLE)]
	HRESULT FillStyle([in]long style);
	[propget, bindable, requestedit, id(DISPID_FILLSTYLE)]
	HRESULT FillStyle([out, retval]long* pstyle);
	[propputref, bindable, requestedit, id(DISPID_FONT)]
	HRESULT Font([in]IFontDisp* pFont);
	[propput, bindable, requestedit, id(DISPID_FONT)]
	HRESULT Font([in]IFontDisp* pFont);
	[propget, bindable, requestedit, id(DISPID_FONT)]
	HRESULT Font([out, retval]IFontDisp** ppFont);
	[propput, bindable, requestedit, id(DISPID_FORECOLOR)]
	HRESULT ForeColor([in]OLE_COLOR clr);
	[propget, bindable, requestedit, id(DISPID_FORECOLOR)]
	HRESULT ForeColor([out,retval]OLE_COLOR* pclr);
	[propput, bindable, requestedit, id(DISPID_ENABLED)]
	HRESULT Enabled([in]VARIANT_BOOL vbool);
	[propget, bindable, requestedit, id(DISPID_ENABLED)]
	HRESULT Enabled([out,retval]VARIANT_BOOL* pbool);
	[propget, bindable, requestedit, id(DISPID_HWND)]
	HRESULT HWND([out, retval]LONG_PTR* pHWND);
	[propput, bindable, requestedit, id(DISPID_TABSTOP)]
	HRESULT TabStop([in]VARIANT_BOOL vbool);
	[propget, bindable, requestedit, id(DISPID_TABSTOP)]
	HRESULT TabStop([out, retval]VARIANT_BOOL* pbool);
	[propput, bindable, requestedit, id(DISPID_TEXT)]
	HRESULT Text([in]BSTR strText);
	[propget, bindable, requestedit, id(DISPID_TEXT)]
	HRESULT Text([out, retval]BSTR* pstrText);
	[propput, bindable, requestedit, id(DISPID_CAPTION)]
	HRESULT Caption([in]BSTR strCaption);
	[propget, bindable, requestedit, id(DISPID_CAPTION)]
	HRESULT Caption([out,retval]BSTR* pstrCaption);
	[propput, bindable, requestedit, id(DISPID_BORDERVISIBLE)]
	HRESULT BorderVisible([in]VARIANT_BOOL vbool);
	[propget, bindable, requestedit, id(DISPID_BORDERVISIBLE)]
	HRESULT BorderVisible([out, retval]VARIANT_BOOL* pbool);
	[propput, bindable, requestedit, id(DISPID_APPEARANCE)]
	HRESULT Appearance([in]short nAppearance);
	[propget, bindable, requestedit, id(DISPID_APPEARANCE)]
	HRESULT Appearance([out, retval]short* pnAppearance);
	[propput, bindable, requestedit, id(DISPID_MOUSEPOINTER)]
	HRESULT MousePointer([in]long pointer);
	[propget, bindable, requestedit, id(DISPID_MOUSEPOINTER)]
	HRESULT MousePointer([out, retval]long* ppointer);
	[propputref, bindable, requestedit, id(DISPID_MOUSEICON)]
	HRESULT MouseIcon([in]IPictureDisp* pMouseIcon);
	[propput, bindable, requestedit, id(DISPID_MOUSEICON)]
	HRESULT MouseIcon([in]IPictureDisp* pMouseIcon);
	[propget, id(DISPID_MOUSEICON)]
	HRESULT MouseIcon([out, retval]IPictureDisp** ppMouseIcon);
	[propputref, bindable, requestedit, id(DISPID_PICTURE)]
	HRESULT Picture([in]IPictureDisp* pPicture);
	[propput, bindable, requestedit, id(DISPID_PICTURE)]
	HRESULT Picture([in]IPictureDisp* pPicture);
	[propget, bindable, requestedit, id(DISPID_PICTURE)]
	HRESULT Picture([out, retval]IPictureDisp** ppPicture);
	[propput, bindable, requestedit, id(DISPID_VALID)]
	HRESULT Valid([in]VARIANT_BOOL vbool);
	[propget, bindable, requestedit, id(DISPID_VALID)]
	HRESULT Valid([out, retval]VARIANT_BOOL* pbool);
	[propput, bindable, requestedit, id(DISPID_READYSTATE)]
	HRESULT ReadyState([in]long state);
	[propget, bindable, requestedit, id(DISPID_READYSTATE)]
	HRESULT ReadyState([out, retval]long* pstate);
};


#endif