#pragma once

#ifndef FF_INCLUDED_detection_users_users
#define FF_INCLUDED_detection_users_users

#include "fastfetch.h"

typedef struct FFUserResult
{
    FFstrbuf name;
    FFstrbuf hostname;
    FFstrbuf clientIp;
    FFstrbuf tty;
    uint64_t loginTime; // ms
} FFUserResult;

const char* ffDetectUsers(FFlist* users);

#endif
