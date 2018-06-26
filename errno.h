/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * Error definitions
 *
 * Copyright 2017, 2018 Phoenix Systems
 * Author: Pawel Pisarczyk
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _LIBPHOENIX_ERRNO_H_
#define _LIBPHOENIX_ERRNO_H_


extern int errno;


#include <phoenix/errno.h>


/* Linux/x86-compatible numbers for easier debugging */

#define ENOTEMPTY       39
#define EUNATCH         49
#define ENODATA         61
#define EPROTO          71
#define ENOTSOCK        88
#define EMSGSIZE        90
#define ENOPROTOOPT     92
#define EOPNOTSUPP      95
#define EPFNOSUPPORT    96
#define EAFNOSUPPORT    97
#define EADDRINUSE      98
#define EADDRNOTAVAIL   99
#define ECONNABORTED    103
#define ECONNRESET      104
#define ENOBUFS         105
#define EISCONN         106
#define ENOTCONN        107
#define ETIMEDOUT       110
#define ECONNREFUSED    111
#define EHOSTUNREACH    113
#define EALREADY        114
#define EINPROGRESS     115


#endif
