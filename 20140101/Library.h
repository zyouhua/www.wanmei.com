#pragma once

#include "bzlib.h"
#include "crypt_buf.h"
#include "rapidxml.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml_print.hpp"

#include <boost/lexical_cast.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/format.hpp>
#include <boost/noncopyable.hpp>
#include <boost/algorithm/string.hpp>

#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/exception.h>
#include <cppconn/driver.h>
#include <cppconn/connection.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/statement.h>

using namespace rapidxml;
using namespace boost;
using namespace sql;
using namespace sql::mysql;
