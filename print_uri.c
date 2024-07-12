
#include <stdio.h>
#include "structs.h"

int print_uri ( struct uri *a_uri ) {

	printf ( "host: %s\n", a_uri->host ) ;
	printf ( "port: %s\n", a_uri->port ) ;
	printf ( "path: %s\n", a_uri->path ) ;

	return 0 ;
}
