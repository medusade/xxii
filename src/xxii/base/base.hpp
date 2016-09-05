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
///   File: base.hpp
///
/// Author: $author$
///   Date: 8/18/2016
///////////////////////////////////////////////////////////////////////
#ifndef _XXII_BASE_BASE_HPP
#define _XXII_BASE_BASE_HPP

#include "xos/base/base.hpp"
#include "xos/base/array.hpp"
#include "xos/base/string.hpp"
#include "xos/base/date.hpp"
#include "xos/base/types.hpp"
#include "xos/base/opened.hpp"
#include "xos/base/opener.hpp"
#include "xos/base/created.hpp"
#include "xos/base/creator.hpp"
#include "xos/base/attached.hpp"
#include "xos/base/attacher.hpp"
#include "xos/base/wrapped.hpp"
#include "xos/base/to_string.hpp"
#include "xos/base/argv.hpp"
#include "xos/io/reader.hpp"
#include "xos/io/file/reader.hpp"
#include "xos/io/read/file.hpp"
#include "xos/io/writer.hpp"
#include "xos/io/file/writer.hpp"
#include "xos/io/writer.hpp"
#include "xos/io/write/file.hpp"
#include "xos/io/logger.hpp"
#include "xos/mt/locker.hpp"
#include "xos/mt/lock.hpp"
#include "xos/mt/acquirer.hpp"
#include "xos/mt/acquire.hpp"
#include "xos/mt/mutex.hpp"
#include "xos/mt/semaphore.hpp"
#include "xos/mt/os/mutex.hpp"
#include "xos/mt/os/semaphore.hpp"

namespace xxii {

typedef xos::base::implement_base implement_base;
typedef xos::base::base base;

typedef xos::base::byte_array byte_array;
typedef xos::base::word_array word_array;

typedef xos::base::string string;
typedef xos::base::tstring tstring;
typedef xos::base::wstring wstring;

typedef xos::base::char_to_string char_to_string;
typedef xos::base::chars_to_string chars_to_string;
typedef xos::base::pointer_to_string pointer_to_string;

namespace io {

typedef xos::io::reader reader;
typedef xos::io::char_reader char_reader;
typedef xos::io::tchar_reader tchar_reader;
typedef xos::io::wchar_reader wchar_reader;
typedef xos::io::byte_reader byte_reader;
typedef xos::io::word_reader word_reader;

typedef xos::io::writer writer;
typedef xos::io::char_writer char_writer;
typedef xos::io::tchar_writer tchar_writer;
typedef xos::io::wchar_writer wchar_writer;
typedef xos::io::byte_writer byte_writer;
typedef xos::io::word_writer word_writer;

} // namespace io

namespace mt {

typedef xos::mt::wait_status wait_status;
static const wait_status wait_success = xos::mt::wait_success;
static const wait_status wait_failed = xos::mt::wait_failed;
static const wait_status wait_busy = xos::mt::wait_busy;
static const wait_status wait_interrupted = xos::mt::wait_interrupted;
static const wait_status wait_invalid = xos::mt::wait_invalid;
typedef xos::mt::waiter waiter;

typedef xos::mt::locker locker;
typedef xos::mt::lock lock;

typedef xos::mt::acquirer acquirer;
typedef xos::mt::acquire acquire;

typedef xos::mt::mutex mutex;
typedef xos::mt::semaphore semaphore;

namespace os {

typedef xos::mt::os::mutex mutex;
typedef xos::mt::os::semaphore semaphore;

} // namespace os

} // namespace mt

} // namespace xxii

#endif // _XXII_BASE_BASE_HPP 
