/*
 * This simple code example lists the contents of a directory.
 *
 * This code uses only standard and interoperable libraries between Windows, Unix, Mac and others.
 */

#include "utils/ls.c"
 
int main(int argc, char *argv[])
{
    /* Select default locale */
    setlocale (LC_ALL, "");

    /* List current working directory if no arguments on command line */
    if (argv[1] == NULL) {
        list_directory(".");
    } else {
        list_directory(argv[1]);
    }

    return 0;
}
