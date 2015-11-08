/**********************************************************\
Original Author: Richard Bateman (taxilian)

Created:    Dec 11, 2010
License:    Dual license model; choose one of two:
            New BSD License
            http://www.opensource.org/licenses/bsd-license.php
            - or -
            GNU Lesser General Public License, version 2.1
            http://www.gnu.org/licenses/lgpl-2.1.html

Copyright 2009 Richard Bateman, Firebreath development team
\**********************************************************/

#ifndef H_AXPLUGINDEFS
#define H_AXPLUGINDEFS

#include "FBControl.h"

namespace FB { namespace ActiveX {
    char FBCONTROL0_MIMETYPE[];
    typedef FB::ActiveX::CFBControl<&CLSID_FBControl0, FBCONTROL0_MIMETYPE, IFBControl, &DIID_IFBComEventSource, &FB_LIBID> CFBControl0;
} }
typedef FB::ActiveX::CFBControl0 CFBControl0;
OBJECT_ENTRY_AUTO(__uuidof(FBControl0), CFBControl0);
#endif
