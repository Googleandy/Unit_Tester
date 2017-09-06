/*
 * factorial.cpp
 *
 *  Created on: Aug 16, 2017
 *      Author: atzeng
 */
#include "factorial.h"

int factorial(int n) {
	int result = 1;
	for(int i = 1; i <= n; i++){
		result *=i;
	}
	return result;
}


