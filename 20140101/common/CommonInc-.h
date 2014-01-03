#pragma once

#include <boost/log/common.hpp>
#include <boost/log/sinks.hpp>
#include "crypt_buf.h"
#include "../bzlib/bzlib.h"
#include "../Include.h"

namespace logging = boost::log;
namespace sinks = boost::log::sinks;
namespace keywords = boost::log::keywords;

static char * MODULE_NAME = "Common";
