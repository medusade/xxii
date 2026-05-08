///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2016 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: x11.hpp
///
/// Author: $author$
///   Date: 8/18/2016
///////////////////////////////////////////////////////////////////////
#ifndef _XXII_X11_X11_HPP
#define _XXII_X11_X11_HPP

#include "xxii/base/base.hpp"
#include "xxii/io/logger.hpp"

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/xpm.h>
#include <X11/ICE/ICE.h>
#include <X11/ICE/ICElib.h>

#if defined(DefaultScreen)
#define XXII_X11_X11_DefaultScreen DefaultScreen
#undef DefaultScreen
#endif // defined(DefaultScreen)

#if defined(Status)
typedef Status XXII_X11_X11_Status;
#undef Status
typedef XXII_X11_X11_Status Status;
#endif // defined(Status)

#if defined(Bool)
typedef Bool XXII_X11_X11_Bool;
#undef Bool
typedef XXII_X11_X11_Bool Bool;
#endif // defined(Bool)

#if defined(True)
enum { XXII_X11_X11_True = True };
#undef True
enum { True = XXII_X11_X11_True };
#endif // defined(True)

#if defined(False)
enum { XXII_X11_X11_False = False };
#undef False
enum { False = XXII_X11_X11_False };
#endif // defined(False)

#if defined(None)
enum { XXII_X11_X11_None = None };
#undef None
enum { None = XXII_X11_X11_None };
#endif // defined(None)

#if defined(Success)
enum { XXII_X11_X11_Success = Success };
#undef Success
enum { Success = XXII_X11_X11_Success };
#endif // defined(Success)

namespace xxii {
namespace x11 {

typedef short XOffset;
typedef unsigned short XSize;
typedef ::Status XStatus;
typedef ::Display XDisplay;
typedef ::Screen XScreen;
typedef ::Visual XVisual;
typedef ::Window XWindow;
typedef ::Drawable XDrawable;
typedef ::Pixel XPixel;
typedef ::XColor XColor;
typedef ::Region XRegion;
typedef ::XRectangle XRectangle;
typedef ::GC XGC;
typedef ::XGCValues XGCValues;
typedef unsigned long XGCValuesMask;
typedef ::Atom XAtom;
typedef ::Colormap XColormap;
typedef int XEventType;
typedef long XEventMask;
typedef unsigned long XSetWindowAttributesMask;

} // namespace x11
} // namespace xxii 

#endif // _XXII_X11_X11_HPP 
