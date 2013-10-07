#pragma once

#include "bzlib.h"
#include "crypt_buf.h"
#include "rapidxml.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml_print.hpp"

#include <boost/lexical_cast.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/noncopyable.hpp>
#include <boost/algorithm/string.hpp>

#include <mysql_connection.h>
#include <mysql_driver.h>
#include <statement.h>

using namespace rapidxml;
using namespace boost;
using namespace sql;
using namespace sql::mysql;
