
#include <stdio.h>
#include "structs.h"

int print_uri ( struct uri *a_uri ) ;

int main ( int argc , char *argv[] ) {

	if ( argc != 4 ) {
		printf ( "main(): usage: $a.out host_name.com port_number path\n" ) ; 
		printf ( "main():    ex: $a.out 3deem.com 80 /\n" ) ;
		printf ( "main():    ex: $a.out 3deem.com 80 /about\n" ) ;
		return 1;
	}

	struct uri a_uri ;
	sprintf ( a_uri.host , "%s" , argv[1] ) ;
	sprintf ( a_uri.port , "%s" , argv[2] ) ;
	sprintf ( a_uri.path , "%s" , argv[3] ) ;

	print_uri ( &a_uri ) ;

	return 0 ;
}

