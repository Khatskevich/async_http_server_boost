//
// connection_manager.h
// ~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2017 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_CONNECTION_MANAGER_h
#define HTTP_CONNECTION_MANAGER_h

#include <set>
#include <boost/noncopyable.hpp>
#include "connection.h"

namespace http {
    namespace server {

/// Manages open connections so that they may be cleanly stopped when the server
/// needs to shut down.
        class connection_manager
                : private boost::noncopyable
        {
        public:
            /// Add the specified connection to the manager and start it.
            void start(connection_ptr c);

            /// Stop the specified connection.
            void stop(connection_ptr c);

            /// Stop all connections.
            void stop_all();

        private:
            /// The managed connections.
            std::set<connection_ptr> connections_;
        };

    } // namespace server
} // namespace http

#endif // HTTP_CONNECTION_MANAGER_h