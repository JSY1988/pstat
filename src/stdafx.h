// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#ifndef _WIN32_WINNT		// ����ʹ���ض��� Windows XP ����߰汾�Ĺ��ܡ�
#define _WIN32_WINNT 0x0501	// ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
#endif						


// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#include <stdarg.h>

#ifdef WIN32
#include "nstat_win32.h"
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <pthread.h>
#include <sys/wait.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <unistd.h>
#include <netdb.h>
#include <sys/ioctl.h>
#include <net/if.h>

#ifdef USE_SYSLOG
#include <syslog.h>
#endif

#include <netdb.h>
#include <dirent.h>
#include <pwd.h>
typedef int                 BOOL;
typedef void *HANDLE;

#ifndef FALSE
#define FALSE               0
#endif

#ifndef TRUE
#define TRUE                1
#endif

#endif

#ifdef linux
#define __FAVOR_BSD
#endif


#include <errno.h>
#include <signal.h>
#include <ctype.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

#ifndef MAX_PATH
#define MAX_PATH                256
#endif
#define HAVE_PTHREAD_H


