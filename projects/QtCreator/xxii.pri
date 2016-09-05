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
XXII_PKG = ../../../../..
XXII_BLD = ../..
XXII_PRJ = $${XXII_PKG}
XXII_BIN = $${XXII_BLD}/bin
XXII_LIB = $${XXII_BLD}/lib
XXII_SRC = $${XXII_PKG}/src

CONFIG(debug, debug|release) {
XXII_CONFIG = Debug
} else {
XXII_CONFIG = Release
}

########################################################################
# nadir
NADIR_PKG = $${XXII_PKG}/../nadir
NADIR_PRJ = $${NADIR_PKG}
NADIR_SRC = $${NADIR_PKG}/src

nadir_INCLUDEPATH += \
$${NADIR_SRC} \

nadir_DEFINES += \

########################################################################

xxii_INCLUDEPATH += \
$${XXII_SRC} \
$${nadir_INCLUDEPATH} \

xxii_DEFINES += \
$${nadir_DEFINES} \

xxii_LIBS += \
-L$${XXII_LIB}/libxxii \
-lxxii \

