/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "spin.h"

void print_spin_result(int spin_code){
	switch (spin_code) {
		case 0: printf("You got 100 scored!\n"); break;
		case 1: printf("You got 200 scored!\n"); break;
		case 2: printf("You got 300 scored!\n"); break;
		case 3: printf("You got 400 scored!\n"); break;
		case 4: printf("You got 500 scored!\n"); break;
		case 5: printf("You got 600 scored!\n"); break;
		case 6: printf("You got 700 scored!\n"); break;
		case 7: printf("You got 800 scored!\n"); break;
		case 8: printf("You got 900 scored!\n"); break;
		case 9: printf("You got 1000 scored!\n"); break;
		case 10: printf("You got the Gap doi\n"); break;
		case 11: printf("You got the Chia doi\n"); break;
		case 12: printf("You got the Mat luot\n"); break;
		case 13: printf("You got the Them luot\n"); break;
		case 14: printf("You got the May man\n"); break;
		default: break;
	}
}

void
spinprog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	char * spin_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SPINPROG, SPIN_V1, "tcp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	spin_1_arg = "SPIN";
	result_1 = spin_1(&spin_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else print_spin_result(*result_1);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	char choice;
	printf("Press Enter to spin ");
	scanf("%c",&choice);
	if (choice=='\n') spinprog_1 (host);
exit (0);
}
