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
///   File: colormap.hpp
///
/// Author: $author$
///   Date: 8/20/2016
///////////////////////////////////////////////////////////////////////
#ifndef _XXII_X11_COLORMAP_HPP
#define _XXII_X11_COLORMAP_HPP

#include "xxii/x11/created.hpp"

namespace xxii {
namespace x11 {

typedef xos::base::creatort<implement_base> colormap_creator;
typedef attachert<XColormap, int, None, XDisplay, colormap_creator> colormap_attacher;
typedef attachedt<XColormap, int, None, XDisplay, colormap_attacher> colormap_attached;
typedef createdt<XColormap, int, None, XDisplay, colormap_attacher, colormap_attached> colormap_created;
typedef colormap_attacher colormap_implements;
typedef colormap_created colormap_extends;
///////////////////////////////////////////////////////////////////////
///  Class: colormapt
///////////////////////////////////////////////////////////////////////
template
<class TImplements = colormap_implements, class TExtends = colormap_extends>

class _EXPORT_CLASS colormapt: virtual public TImplements,public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    colormapt
    (XDisplay* display = 0, XColormap detached = None, bool is_created = false)
    : Extends(display, detached, is_created) {
    }
    virtual ~colormapt() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool create
    (XDisplay& display, XWindow window, XVisual& visual) {
        int alloc_entries = AllocAll;
        return create
        (display, window, visual, alloc_entries);
    }
    virtual bool create
    (XDisplay& display, XWindow window,
     XVisual& visual, int alloc_entries) {
        XColormap detached = None;
        if (None != (detached = (create_attached
            (display, window, visual, alloc_entries)))) {
            this->set_is_created();
            return true;
        }
        return None;
    }
    virtual bool destroy() {
        XDisplay* display = 0;
        XColormap detached = None;
        if (None != (this->detach(display))) {
            if ((display)) {
                if ((destroy_detached(*display, detached))) {
                    return true;
                }
            }
        }
        return false;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual XColormap create_attached
    (XDisplay& display, XWindow window, XVisual& visual) {
        int alloc_entries = AllocAll;
        return create_attached
        (display, window, visual, alloc_entries);
    }
    virtual XColormap create_attached
    (XDisplay& display, XWindow window,
     XVisual& visual, int alloc_entries) {
        XColormap detached = None;
        if (None != (detached = (create_detached
            (display, window, visual, alloc_entries)))) {
            this->attach(&display, detached);
            return detached;
        }
        return None;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual XColormap create_detached
    (XDisplay& display, XWindow window, XVisual& visual) const {
        int alloc_entries = AllocAll;
        return create_detached
        (display, window, visual, alloc_entries);
    }
    virtual XColormap create_detached
    (XDisplay& display, XWindow window,
     XVisual& visual, int alloc_entries) const {
        XColormap detached = None;
        XXII_LOG_MESSAGE_DEBUG("XCreateColormap(&display = " << pointer_to_string(&display) << ", window = " << window << ", &visual = " << pointer_to_string(&visual) << ", alloc_entries = " << alloc_entries << ")...");
        if (None != (detached = (XCreateColormap
            (&display, window, &visual, alloc_entries)))) {
            XXII_LOG_MESSAGE_DEBUG("..." << detached << " = XCreateColormap(&display = " << pointer_to_string(&display) << ", window = " << window << ", &visual = " << pointer_to_string(&visual) << ", alloc_entries = " << alloc_entries << ")");
            return detached;
        } else {
            XXII_LOG_ERROR("...failed " << detached << " = XCreateColormap(&display = " << pointer_to_string(&display) << ", window = " << window << ", &visual = " << pointer_to_string(&visual) << ", alloc_entries = " << alloc_entries << ")");
        }
        return None;
    }
    virtual bool destroy_detached
    (XDisplay& display, XColormap detached) const {
        if (None != (detached)) {
            XXII_LOG_MESSAGE_DEBUG("XFreeColormap(&display = " << pointer_to_string(&display) << ", detached = " << detached << ")...");
            XFreeColormap(&display, detached);
            return true;
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual XColormap attach_default(XDisplay& display) {
        unsigned int screen_number = XDefaultScreen(&display);
        XColormap detached = attach_default_of_screen(display, screen_number);
        return detached;
    }
    virtual XColormap attach_default_of_screen
    (XDisplay& display, unsigned int screen_number) {
        XScreen* screen = 0;
        XColormap detached = 0;
        XXII_LOG_MESSAGE_DEBUG("XScreenOfDisplay(&display = " << pointer_to_string(&display) << ", screen_number = " << screen_number << ")...");
        if ((screen = XScreenOfDisplay(&display, screen_number))) {
            XXII_LOG_MESSAGE_DEBUG("..." << pointer_to_string(screen) << " = XScreenOfDisplay(&display = " << pointer_to_string(&display) << ", screen_number = " << screen_number << ")");
            detached = attach_default_of_screen(display, *screen);
        } else {
            XXII_LOG_ERROR("...failed " << pointer_to_string(screen) << " = XScreenOfDisplay(&display = " << pointer_to_string(&display) << ", screen_number = " << screen_number << ")");
        }
        return detached;
    }
    virtual XColormap attach_default_of_screen
    (XDisplay& display, XScreen& screen) {
        XColormap detached = 0;
        if ((this->destroyed())) {
            XXII_LOG_MESSAGE_DEBUG("XDefaultColormapOfScreen(&screen = " << pointer_to_string(&screen) << ")...");
            if ((detached = XDefaultColormapOfScreen(&screen))) {
                XXII_LOG_MESSAGE_DEBUG("..." << detached << " = XDefaultColormapOfScreen(&screen = " << pointer_to_string(&screen) << ")");
                this->attach(&display, detached);
            }
        }
        return detached;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef colormapt<> colormap;

} // namespace x11
} // namespace xxii 

#endif // _XXII_X11_COLORMAP_HPP 
