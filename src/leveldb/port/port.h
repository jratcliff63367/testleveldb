// Copyright (c) 2011 The LevelDB Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#ifndef STORAGE_LEVELDB_PORT_PORT_H_
#define STORAGE_LEVELDB_PORT_PORT_H_

#include <string.h>

// Include the appropriate platform specific file below.  If you are
// porting to a new platform, see "port_example.h" for documentation
// of what the new port_<platform>.h file must provide.
#if defined(LEVELDB_PLATFORM_POSIX) || defined(LEVELDB_PLATFORM_WINDOWS)
#  include "port/port_stdcxx.h"
#elif defined(LEVELDB_PLATFORM_CHROMIUM)
#  include "port/port_chromium.h"
#endif

// Because Google cannot be bothered to fix the warning messages in their own source code, I have to resort to
// just globally suppressing some warnings that their code generates.  Hey Google, fix your damned code!
#ifdef _MSC_VER
#pragma warning(disable:4244 4100 4267 4800 4996 4701)
#endif

#endif  // STORAGE_LEVELDB_PORT_PORT_H_