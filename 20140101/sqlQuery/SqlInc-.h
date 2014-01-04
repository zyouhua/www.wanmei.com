#pragma once

#include "../Include.h"
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/exception.h>

#include "SqlFormat/BlobSqlParamter.h"
#include "SqlFormat/StringSqlParamter.h"

static char * MODULE_NAME = "SqlQuery";

using namespace sql;
using namespace sql::mysql;
