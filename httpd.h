#ifndef __HTTP_H__
#define __HTTP_H__
/**************************************
*author: Jone.Chen <yuhua8688@tom.com>
*License:LGPL
*Date:2013-12-11
*version:v1.1
***************************************/

#include <rtthread.h>
#include <rthw.h>
#include <driverlib/rom.h>

#include <lwip/sys.h>
#include <lwip/api.h>
#include <netif/ethernetif.h>
#include <lwip/sockets.h>
#include <string.h>
#include <stdio.h>
#include "fs.h"

//typedef struct sockaddr_in SOCKADDR_IN;
//typedef struct sockaddr SOCKADDR;

#define RT_LWIP_HTTP_PRIORITY		20

#define RT_HTTP_USE_CGI
#define RT_HTTP_USE_POST					
#define RT_HTTP_USE_UPLOAD
#define RT_HTTP_USE_AUTH



#ifdef RT_HTTP_USE_AUTH
#define  USER_AUTH_TITLE	"Mini Web Server"
#define  USER_AUTH_NAME		"admin"
#define	 USER_AUTH_PWD		"admin"
#endif

void init_httpd(void);
void rt_httpd_entry(void *parameter);
void resolvHttp(int sock,char *data,int len);
#endif 


