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
#   File: xxii.pri
#
# Author: $author$
#   Date: 8/18/2016
########################################################################

XXII_OS = linux

########################################################################
# nadir
NADIR_BLD = ../$${NADIR_PKG}/build/$${XXII_OS}/QtCreator/$${XXII_CONFIG}
NADIR_LIB = $${NADIR_BLD}/lib

########################################################################

xxii_INCLUDEPATH += \

xxii_DEFINES += \

xxii_HEADERS += \

xxii_SOURCES += \

xxii_LIBS += \
-L$${NADIR_LIB}/libxosnadir \
-lxosnadir \
-lpthread \
-ldl \
-lrt \

