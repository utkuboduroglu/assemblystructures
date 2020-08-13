// clang version 10.0.0
// Target: x86_64-pc-linux-gnu
// Thread model: posix
// InstalledDir: /usr/bin
/* structure: conditionals & loops
 * MON 04 AUG 2020 */
// CURRENTLY SEGFAULTING

// macro definition for the POSIX standard int fileno(FILE*) function
#define _POSIX_SOURCE
#define BUFFER_BLOCK 32

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char* argv[]) {

    /*  read file name from argv,
     *  open FILE* pointer,
     *  read with:
     *      fscanf, fgets, read
     *  write with:
     *      fprintf, fputs, write
     *  close file pointer */

    // read filename to variable
    assert(argc == 2);
    char *filename = malloc(BUFFER_BLOCK * sizeof(char));
    strcpy(filename, argv[1]);

    // open file pointer for RW, check if the file exists.
    FILE *fp = fopen(filename, "r+");
    assert(fp != NULL);
    char *buf = malloc(BUFFER_BLOCK * sizeof(char));

    // read file with fscanf, fgets, read (BUFFER_BLOCK bytes)
    fscanf(fp, "%s", buf);
    printf("<fscanf>: %s\n", buf);

    fgets(buf, BUFFER_BLOCK * sizeof(char), fp);
    printf("<fgets>: %s\n", buf);

    read(
            fileno(fp), buf,
            (size_t) BUFFER_BLOCK * sizeof(char)
        );
    printf("<read>: %s\n", buf);

    // writing to file with fprintf, fputs, write (BUFFER_BLOCK bytes)
    fprintf(fp, "%s", buf);
    fputs(buf, fp);
    write(
            fileno(fp), buf,
            (size_t) BUFFER_BLOCK * sizeof(char)
            );

    // closing & cleaning pointer(s)
    fclose(fp); free(buf);
    fp = NULL; buf = NULL;

    return EXIT_SUCCESS;
}
