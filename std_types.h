#include <stdio.h>
#include <stdlib.h>


#ifndef _STD_TYPES_H
#define _STD_TYPES_H

#define ZERO_INIT 0
#define ZERO      0

/*Giving an allies to the data types*/
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef  char sint8_t;
typedef  short sint16_t;
typedef  int sint32_t;

typedef enum return_status{
	R_NOK,
	R_OK
}return_status_t;

#endif //_STD_TYPES_H