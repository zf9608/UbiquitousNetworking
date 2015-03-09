#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <setjmp.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define BUF_LEN 1024

struct timeout{
	long tv_sec;
	long tv_usec;
};
struct timeout timeout;

select(FD_SETSIZE, &testfds, (fd_set*)0, (fd_set*)0, (struct timeval*)&timeout)


