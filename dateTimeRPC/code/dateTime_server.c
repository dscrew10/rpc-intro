/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "dateTime.h"
#include<time.h>

long *
datetime_1_svc(void *argp, struct svc_req *rqstp)
{
	static long  result;

	/*
	 * insert server code here
	 */
	printf("Sending current date and time . \n");
	result = time((long*)0);
	return &result;
}
