/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "airport.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

findAirport_ret *
findair_1(geoCord *argp, CLIENT *clnt)
{
	static findAirport_ret clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, FINDAIR,
		(xdrproc_t) xdr_geoCord, (caddr_t) argp,
		(xdrproc_t) xdr_findAirport_ret, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
