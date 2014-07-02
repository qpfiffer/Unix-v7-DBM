#include "dbm.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    /* Should be smaller than PBLKSIZ: */
    char dbname[] = "example_db";
    int ret = dbminit(dbname);

    if (ret != 0)
        return 1;

    char key[] = "test_key";
    datum kdatum = makdatum(key, strlen(key));

    char val[] = "test_Value";
    datum vdatum = makdatum(val, strlen(val));

    printf("Storing a value...\n");
    store(kdatum, vdatum);

    printf("Retrieving a value...\n");
    datum fetched = fetch(kdatum);

    printf("Retrieved value: %s\n", fetched.dptr);

    return 0;
}
