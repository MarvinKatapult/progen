#include "progen.h"

#include "cdefs.h"

#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>

#define MKDIR(X)        mkdir(X, S_IRWXU | S_IRWXG | S_IRWXO)
#define STRCMP(X, Y)    (strcmp(X, Y) == 0)
#define THROW_ERR(X)    fprintf(stderr, X);

typedef enum {
    c_lang = 0,
    cpp_lang,
} Language;

typedef struct {
    Language lang;
} ProjSettings;

static char resp_buf[256];
static ProjSettings proj_settings;

void askLanguage(void);

void runProgen(int argc, char * argv[]) {
    askLanguage();
    MKDIR("./test"); 
}

void askLanguage(void) {
    printf("Language? [c/cpp]\n");
    scanf("%s", resp_buf);

    if (STRCMP(resp_buf, "c")) {
        proj_settings.lang = c_lang;
    } else if (STRCMP(resp_buf, "cpp")) {
        proj_settings.lang = cpp_lang;
    } else {
        THROW_ERR("No valid language\n");
        askLanguage();
    }
}

void processCmdArgs(int argc, char * argv[]) {
}
