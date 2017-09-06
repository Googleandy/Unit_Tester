// gtest_main.cpp
#include <stdio.h>
#include "gtest/gtest.h"
//#include "gmock/gmock.h"
#include <iostream>
#include <fstream>
#include "tinyxml2.h"

using namespace tinyxml2;
using namespace std;

#ifndef XMLCheckResult
	#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult); return a_eResult; }
#endif

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
