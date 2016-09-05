########################################################################
# Copyright (c) 1988-2016 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: xxhello.pri
#
# Author: $author$
#   Date: 8/18/2016
########################################################################

xxhello_INCLUDEPATH += \
$${xxii_INCLUDEPATH} \

xxhello_DEFINES += \
$${xxii_DEFINES} \

########################################################################
xxhello_HEADERS += \
$${XXII_SRC}/xxii/x11/main.hpp \
$${XXII_SRC}/xxii/x11/colormap.hpp \
$${XXII_SRC}/xxii/x11/color.hpp \
$${XXII_SRC}/xxii/x11/xcolor.hpp \
$${XXII_SRC}/xxii/x11/atom.hpp \
$${XXII_SRC}/xxii/x11/created.hpp \
$${XXII_SRC}/xxii/x11/attached.hpp \
$${XXII_SRC}/xxii/x11/attacher.hpp \
$${XXII_SRC}/xxii/x11/x11.hpp \
$${XXII_SRC}/xxii/io/logger.hpp \
$${XXII_SRC}/xxii/base/base.hpp \

xxhello_SOURCES += \
$${XXII_SRC}/xxii/x11/main.cpp \
$${XXII_SRC}/xxii/x11/colormap.cpp \
$${XXII_SRC}/xxii/x11/color.cpp \
$${XXII_SRC}/xxii/x11/xcolor.cpp \
$${XXII_SRC}/xxii/x11/atom.cpp \
$${XXII_SRC}/xxii/x11/created.cpp \
$${XXII_SRC}/xxii/x11/attached.cpp \
$${XXII_SRC}/xxii/x11/attacher.cpp \
$${XXII_SRC}/xxii/x11/x11.cpp \
$${XXII_SRC}/xxii/io/logger.cpp \
$${XXII_SRC}/xxii/base/base.cpp \

########################################################################
xxhello_HEADERS += \
$${XXII_SRC}/xxii/console/main_main.hpp \
$${XXII_SRC}/xxii/console/main_opt.hpp \
$${XXII_SRC}/xxii/console/main.hpp \

xxhello_SOURCES += \
$${XXII_SRC}/xxii/console/main_main.cpp \
$${XXII_SRC}/xxii/console/main_opt.cpp \

_xxhello_SOURCES += \
$${XXII_SRC}/xxii/console/main.cpp \

########################################################################
xxhello_LIBS += \
$${xxii_LIBS} \
