/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "airport.h"
#include <string>


findAirport_ret *
findair_1_svc(geoCord *argp, struct svc_req *rqstp)
{
	static findAirport_ret  result;
//print what we are getting from the server
	printf("%f \n", argp->latitude);
	printf("%f \n", argp->longitude);
	AirportNode ** temp;
	/*
	 * insert server code here
	 */
// prepare to send info back to places server
	temp = &result.findAirport_ret_u.list;
	(*temp) = (AirportNode*)malloc(sizeof(AirportNode));
	(*temp)->AirportName = new char[MAXLEN];
	(*temp)->AirportName = "Sky Harbor";
	(*temp)->AirportCode = new char[MAXLEN];
	(*temp)->AirportCode = "PHX";
	(*temp)->latitude = argp->latitude;
	(*temp)->longitude = argp->longitude;
	(*temp)->distance = 1.1345678;
	temp = &(*temp)->next;
	temp = NULL;
//return results
	return &result;
}
