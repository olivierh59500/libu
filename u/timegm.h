/* 
 * Copyright (c) 2005, KoanLogic s.r.l. - All rights reserved.  
 */
#ifndef _LIBU_TIMEGM_H_
#define _LIBU_TIMEGM_H_
#include "libu_conf.h"
#include <time.h>

#ifndef HAVE_TIMEGM
time_t timegm(struct tm *tm);
#endif

#endif