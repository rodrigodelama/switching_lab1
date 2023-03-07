#include "tables.h"

void create_tables (routeTable_t* tables)
{											//Initialisation of the elements of the tables
    tables->TBL24 = (unsigned short*) calloc(TBL24_ENTRIES, sizeof(short));  		//note: NUMBER_ENTRIES is defined inside tables.h as a constant (2²⁴ entries as we need them for the main table). We initialize the first table
    tables->TBLlong = (unsigned short*) calloc(256, sizeof(short));		      		//Initialize the second table with the corresponding 256 entries needed (we will expand it later if needed)
    tables->N = 0; 													     		//Initialization of the variable used in order to expand the table later on if needed (as we will need more than one second table, this will help us to distinguish them)
}
