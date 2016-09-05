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
#   File: libxxii.pri
#
# Author: $author$
#   Date: 8/18/2016
########################################################################

libxxii_INCLUDEPATH += \
$${xxii_INCLUDEPATH} \

libxxii_DEFINES += \
$${xxii_DEFINES} \

########################################################################
libxxii_HEADERS += \
$${XXII_SRC}/xxii/x11/x11.hpp \
$${XXII_SRC}/xxii/base/base.hpp \

libxxii_SOURCES += \
$${XXII_SRC}/xxii/x11/x11.cpp \
$${XXII_SRC}/xxii/base/base.cpp \

########################################################################
libxxii_LIBS += \
$${xxii_LIBS} \


