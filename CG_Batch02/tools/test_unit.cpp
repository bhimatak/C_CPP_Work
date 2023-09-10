#include "acutest.hpp"
#include "util.hpp"

void test_add(void)
{
	TEST_CHECK_(add(2,5)==(2+2),"add(%d,%d)==%d",2,2,(2+2));
	TEST_CHECK_(add(0,-2)==(0-2),"add(%d,%d)==%d",0,-2,(0-2));
	TEST_CHECK_(add(2,3)==(2+3),"add(%d,%d)==%d",2,3,(2+3));

}

TEST_LIST = {
	{"int add(int, int);", test_add },
	{"int add(int, int);", test_add },
	{"int add(int, int);", test_add },
	//{"int sub(int, int);", test_sub },
	{0} /* Mandatory */
};