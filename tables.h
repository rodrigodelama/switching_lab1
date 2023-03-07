
#define TBL24_ENTRIES 0xFFFFFF //2^24 = 16777216 entries
#define FIRST_BIT 0x8000 //checks if 1st bit is 0 or 1

typedef struct routeTable {
    unsigned short* TBL24;
    unsigned short* TBLlong;
    int N;
} routeTable_t;
