#ifndef __UTILITY_FNS_H
#define __UTILITY_FNS_H

#include <sys/ioctl.h>

typedef long long s64;


typedef struct ioctl_args_struct{
	s64 round_error;
	s64 n_rounds;
	s64 round_error_sq;
} ioctl_args;

#define TK_IOC_MAGIC  'k'
#define TK_IO_GET_STATS _IOW(TK_IOC_MAGIC,  1, int)

int send_to_timekeeper(char * cmd);
int gettid();
int is_root();
int isModuleLoaded();
void flush_buffer(char * buf, int size);
int get_stats(ioctl_args * args);


#endif