//Rodrigo De Lama - 100451775
//Jaime Mato - 100451639

#include "main.h"
#include "utils.h"
#include "io.h"
#include "tables.h"

int main (int argc, char *argv[]) //argv[1] routing file argv[2] test file
{

if (argc != 3)
{
	printf("\nThe program must have 2 input arguments\n");
    printf("USE:\n");
    printf("\t./my_route_lookup <routingTable> <inputFile>\n");
    printf("WHERE:\n");
    printf("\t<routingTable>\n");
    printf("\t\tThe path for the file containing the routing table\n");
	printf("\t<inputFile>\n");
    printf("\t\tThe path for the input file\n\n");
    return -1;
}

//TODO: Initialize needed files and manage the errors (function printIoExplanationError will print the different errors on each case)

int init = initializeIO(argv[1], argv[2]);
//TODO: function that allows us to use the routing table and a file containing the addresses to be processed and print an error if we can't find anything

if(init != 0)
{
	printf("The following error occured: ");
	printIOExplanationError(init);
	return -1;
}
    /*
    
        USE:
                ./my_route_lookup <routingTable> <inputFile>

        WHERE:
                <routingTable>
                        The path for the file containing the routing table
                <inputFile>
                        The path for the input file
    */


    // my_route_lookup <FIB FILE>                   <INPUT FILE>
    //                 routing_table_simple.txt     prueba0.txt

    printf("Hello World!\n");
    return 0;
}

/*

comment thank you bruv


use multiple tables

second table easiest built in the free heap

*/
