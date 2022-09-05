#ifndef _LISTINGSLIB_H
#define _LISTINGSLIB_H

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAXLINE 4096

void	err_quit(const char *fmt, ...) __attribute__((noreturn));
void	err_sys(const char *fmt, ...) __attribute__((noreturn));

#endif
