
#include <stdio.h>

#define SWFTEST_VERSION "v.0.1.0"
#define SWFTEST_LIB_NAME "swftest"

unsigned int SWFTEST_INITIATED = 0;

unsigned int swftest_init(void)
{
	SWFTEST_INITIATED++;
	fprintf(stdout, "%s initiated\n", SWFTEST_LIB_NAME);
	return SWFTEST_INITIATED;
}


void swftest_version(void)
{
	fprintf(stdout, "%s, version: %s\n", SWFTEST_LIB_NAME, SWFTEST_VERSION);
	return;
}

unsigned int swftest_shutdown(void)
{
	SWFTEST_INITIATED=0;
	fprintf(stdout, "%s shutdown\n", SWFTEST_LIB_NAME);
	return SWFTEST_INITIATED;
}

