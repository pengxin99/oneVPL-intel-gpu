#ifndef _LOG_UTILS_H_
#define _LOG_UTILS_H_
 
#include <stdio.h>
#include <string>

// #ifndef DEBUG
// #define DEBUG

#ifdef DEBUG
#define FunctionStart(...) {                                             \
            // printf("TASK SCHEDULE [%u]: [%s][%s][%d]: ", std::this_thread::get_id(), __FILE__, __FUNCTION__, __LINE__); \
            // printf("\n");                                               \
        }
#else
#define FunctionStart(format, ...) {}
#endif

// #endif  // DEBUG
#endif  // _LOG_UTILS_H_