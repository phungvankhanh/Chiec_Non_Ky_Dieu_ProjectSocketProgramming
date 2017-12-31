/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
wheel_prog_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		client_message register_1_arg;
		client_message login_1_arg;
		client_message logout_1_arg;
		client_message join_1_arg;
		client_message spin_1_arg;
		client_message open_1_arg;
		client_message guess_1_arg;
		client_message guess_all_1_arg;
		client_message surender_1_arg;
		client_message function1_1_arg;
		client_message function2_1_arg;
		client_message function3_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case REGISTER:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) register_1_svc;
		break;

	case LOGIN:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) login_1_svc;
		break;

	case LOGOUT:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) logout_1_svc;
		break;

	case JOIN:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) join_1_svc;
		break;

	case SPIN:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) spin_1_svc;
		break;

	case OPEN:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) open_1_svc;
		break;

	case GUESS:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) guess_1_svc;
		break;

	case GUESS_ALL:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) guess_all_1_svc;
		break;

	case SURENDER:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) surender_1_svc;
		break;

	case FUNCTION1:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) function1_1_svc;
		break;

	case FUNCTION2:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) function2_1_svc;
		break;

	case FUNCTION3:
		_xdr_argument = (xdrproc_t) xdr_client_message;
		_xdr_result = (xdrproc_t) xdr_server_message;
		local = (char *(*)(char *, struct svc_req *)) function3_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (WHEEL_PROG, V1);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, WHEEL_PROG, V1, wheel_prog_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (WHEEL_PROG, V1, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, WHEEL_PROG, V1, wheel_prog_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (WHEEL_PROG, V1, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}
