/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "main.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

server_message *
register_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, REGISTER,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
login_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LOGIN,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
logout_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LOGOUT,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
join_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, JOIN,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
spin_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, SPIN,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
open_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, OPEN,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
guess_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, GUESS,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
guess_all_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, GUESS_ALL,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
surender_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, SURENDER,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
function1_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, FUNCTION1,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
function2_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, FUNCTION2,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

server_message *
function3_1(client_message *argp, CLIENT *clnt)
{
	static server_message clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, FUNCTION3,
		(xdrproc_t) xdr_client_message, (caddr_t) argp,
		(xdrproc_t) xdr_server_message, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
