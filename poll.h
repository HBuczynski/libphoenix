/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * poll.h
 *
 * Copyright 2018 Phoenix Systems
 * Author: Jan Sikorski
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _LIBPHENIX_POLL_H_
#define _LIBPHENIX_POLL_H_


#define POLLIN         0x1
#define POLLRDNORM     0x2
#define POLLRDBAND     0x4
#define POLLPRI        0x8
#define POLLOUT       0x10
#define POLLWRNORM    0x20
#define POLLWRBAND    0x40
#define POLLERR       0x80
#define POLLHUP      0x100
#define POLLNVAL     0x200


typedef unsigned int nfds_t;


struct pollfd {
	int   fd;
	short events;
	short revents;
};


extern int poll(struct pollfd *fds, nfds_t nfds, int timeout);

#endif
