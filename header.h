//
// header.h
// ~~~~~~~~~~
//
// Copyright (c) 2003-2017 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_HEADER_h
#define HTTP_HEADER_h

#include <string>

namespace http {
    namespace server {

        struct header
        {
            std::string name;
            std::string value;
        };

    } // namespace server
} // namespace http

#endif // HTTP_HEADER_h