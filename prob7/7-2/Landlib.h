#ifndef _LANDLIB_H_
#define _LANDLIB_H_

#include <stdio.h>                     
#include <stdlib.h>
#include <time.h>

//	乱数の初期化
void init_rand();
//	指定した範囲の乱数を発生
int getRand(int,int);

#endif //_LANDLIB_H_