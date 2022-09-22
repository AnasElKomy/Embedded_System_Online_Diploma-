/*
 * Platform_Types.h
 *
 *  Created on: Sep 21, 2022
 *      Author: Anas
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdbool.h>

//-------True and False-------//

#ifndef _Bool
#define _Bool unsigned char
#endif

#ifndef FALSE
#define FALSE 		(boolean)false
#endif
#ifndef TRUE
#define TRUE 		(boolean)ture
#endif

//------------//

#define CPU_TYPE 			CPU_TYPE_32
#define CPU_BIT_OREDER 		MSB_FIRST
#define CPU_BYTE_ORDER 		HIGH_BYTE_FIRST

typedef _Bool boolean;
typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short uint16;
typedef signed short sint16;
typedef unsigned int uint32;
typedef signed int sint32;
typedef float float32;
typedef double float64;

typedef volatile uint8 vuint8_t;
typedef volatile sint8 vsint8_t;

typedef volatile uint16 vuint16_t;
typedef volatile sint16 vsint16_t;

typedef volatile uint32 vuinut32_t;
typedef volatile sint32 vsinut32_t;





#endif /* PLATFORM_TYPES_H_ */
