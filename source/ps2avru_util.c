#ifndef PS2AVRU_UTIL_C
#define PS2AVRU_UTIL_C

#include <string.h>
#include <stdio.h>

#include "ps2avru_util.h"

void insert(uint8_t ary[], int idx, char ch)
{
     memmove(ary + idx + 1, ary + idx, strlen((char *)ary) - idx + 1);
     ary[idx] = ch;
}
 
void delete(uint8_t ary[], int idx)
{
     memmove(ary + idx, ary + idx + 1, strlen((char *)ary) - idx);
}
 
void append(uint8_t ary[], char ch)
{
     insert(ary, strlen((char *)ary), ch);
}
 
int findIndex(uint8_t xArr[], uint8_t xlen, uint8_t xValue)
{
	// uint8_t i;
	// for (i = 0; i < xlen; ++i)
	// {
	// 	if (xArr[i] == xValue)
	// 	{
	// 		return i;  /* it was found */
	// 	}
	// }
	// return -1;  /* if it was not found */

	char * pch;
    pch = (char*) memchr((char *)xArr, xValue, strlen((char *)xArr));

    if (pch!=NULL)
        return (pch-(char *)xArr);
    else
        return -1;
}

// int equalAll(uint8_t xArr[], uint8_t xlen)
// {
// 	uint8_t i;
// 	uint8_t prev;
// 	int cur = -1;
// 	prev = xArr[0];
// 	for (i = 0; i < xlen; ++i)
// 	{
// 		cur = xArr[i];
// 		if (cur != prev)
// 		{
// 			return -1;  /* it is not equal */
// 		}
// 		prev = cur;
// 	}
// 	return cur;  /* all equal */
// }

#endif