#/**********************************************************\ 
#
# Auto-Generated Plugin Configuration file
# for EarthWeb
#
#\**********************************************************/

set(PLUGIN_NAME "EarthWeb")
set(PLUGIN_PREFIX "EWE")
set(COMPANY_NAME "Earth")

# ActiveX constants:
set(FBTYPELIB_NAME EarthWebLib)
set(FBTYPELIB_DESC "EarthWeb 1.0 Type Library")
set(IFBControl_DESC "EarthWeb Control Interface")
set(FBControl_DESC "EarthWeb Control Class")
set(IFBComJavascriptObject_DESC "EarthWeb IComJavascriptObject Interface")
set(FBComJavascriptObject_DESC "EarthWeb ComJavascriptObject Class")
set(IFBComEventSource_DESC "EarthWeb IFBComEventSource Interface")
set(AXVERSION_NUM "1")

# NOTE: THESE GUIDS *MUST* BE UNIQUE TO YOUR PLUGIN/ACTIVEX CONTROL!  YES, ALL OF THEM!
set(FBTYPELIB_GUID b1a67b13-3bd0-5230-8b89-556d13e583af)
set(IFBControl_GUID 1ae27204-3418-50a1-999c-7650d1aa861b)
set(FBControl_GUID 9cca8a69-244d-5670-adb4-463d9758a0d2)
set(IFBComJavascriptObject_GUID 51e80453-4e81-5a55-b176-b78e487e551c)
set(FBComJavascriptObject_GUID 69674f56-a11d-58f9-ab62-7f9e25689ab7)
set(IFBComEventSource_GUID 6ee59e64-c20d-5f55-9d0d-64bfaf3a45d9)
if ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID 59545c93-777d-5d6e-adcc-9eb7d3cebea6)
else ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID e11a8184-9a7b-5df2-b197-b76729488d2a)
endif ( FB_PLATFORM_ARCH_32 )

# these are the pieces that are relevant to using it from Javascript
set(ACTIVEX_PROGID "Earth.EarthWeb")
if ( FB_PLATFORM_ARCH_32 )
    set(MOZILLA_PLUGINID "21stc.com.cn/EarthWeb")  # No 32bit postfix to maintain backward compatability.
else ( FB_PLATFORM_ARCH_32 )
    set(MOZILLA_PLUGINID "21stc.com.cn/EarthWeb_${FB_PLATFORM_ARCH_NAME}")
endif ( FB_PLATFORM_ARCH_32 )

# strings
set(FBSTRING_CompanyName "Earth")
set(FBSTRING_PluginDescription "Earth for Web.")
set(FBSTRING_PLUGIN_VERSION "1.0.0.0")
set(FBSTRING_LegalCopyright "Copyright 2015 Earth")
set(FBSTRING_PluginFileName "np${PLUGIN_NAME}")
if (APPLE)
    # On apple, np is not needed
    set(FBSTRING_PluginFileName "${PLUGIN_NAME}")
endif()
set(FBSTRING_ProductName "EarthWeb")
set(FBSTRING_FileExtents "")
if ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "EarthWeb")  # No 32bit postfix to maintain backward compatability.
else ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "EarthWeb_${FB_PLATFORM_ARCH_NAME}")
endif ( FB_PLATFORM_ARCH_32 )
set(FBSTRING_MIMEType "application/x-earthweb")

# Uncomment this next line if you're not planning on your plugin doing
# any drawing:

#set (FB_GUI_DISABLED 1)

# Mac plugin settings. If your plugin does not draw, set these all to 0
set(FBMAC_USE_QUICKDRAW 0)
set(FBMAC_USE_CARBON 1)
set(FBMAC_USE_COCOA 1)
set(FBMAC_USE_COREGRAPHICS 1)
set(FBMAC_USE_COREANIMATION 0)
set(FBMAC_USE_INVALIDATINGCOREANIMATION 0)

# If you want to register per-machine on Windows, uncomment this line
#set (FB_ATLREG_MACHINEWIDE 1)
