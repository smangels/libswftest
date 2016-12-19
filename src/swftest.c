
#include <stdio.h>

#define SWFTEST_VERSION "v.0.1.0"
#define SWFTEST_LIB_NAME "swftest"

unsigned int SWFTEST_INITIATED = 0;
unsigned int SWFTEST_RECVD_ID=0;

unsigned int swftest_init(unsigned int id)
{
	SWFTEST_INITIATED++;
	SWFTEST_RECVD_ID=id;
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
	fprintf(stdout, "%s shutdown, id: %3d\n", SWFTEST_LIB_NAME, SWFTEST_RECVD_ID);
	return SWFTEST_INITIATED;
}

