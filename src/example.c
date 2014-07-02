#include "dbm.h"

int main(int argc, char *argv[]) {
    /* Should be smaller than PBLKSIZ: */
    char dbname[] = "example_db";
    int ret = dbminit(dbname);
    return 0;
}
