#include "progen.h"

#include "cdefs.h"

#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>

#define MKDIR(X)    mkdir(X, S_IRWXU | S_IRWXG | S_IRWXO)

void runProgen(int argc, char * argv[]) {
    printf("Hello World\n");
    MKDIR("./test");
}

void processCmdArgs(int argc, char * argv[]) {
}
