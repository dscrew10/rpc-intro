/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "chat.h"

bool_t
xdr_Message (XDR *xdrs, Message *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->message, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
