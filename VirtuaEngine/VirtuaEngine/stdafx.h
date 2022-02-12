#pragma once
#include "LogLevel.h"

#ifdef _DEBUG
#define LOG_LEVEL LogLevel::Trace
#else
#define LOG_LEVEL LogLevel::Error
#endif