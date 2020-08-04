// clang version 10.0.0
// Target: x86_64-pc-linux-gnu
// Thread model: posix
// InstalledDir: /usr/bin
/* structure: conditionals & loops
 * MON 04 AUG 2020 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

// define arbitrary function
uint64_t giveApples() {
    return (uint64_t) rand();
}

int main(void) {
    //initialize seed
    time_t seed = time(NULL);
    srand(seed);

    // fill in the following expressions
    if (giveApples() == 0)
        printf("!!! Wow! What are the odds?\n");

    if (giveApples() == 5)
        printf("!!! 5 is a really weird number.\n");
    else if (giveApples() != 13)
        printf("I mean, mathematically, 13 isn't that likely anyways.\n");

    if (giveApples() % 7 == 0)
        printf("!!! You'd expect this to occur around 1/7 times. Huh.\n");
    else
        printf("Don't worry, 7 isn't that great anyways.\n");

    while (giveApples() % 2 != 0)
        printf("I believe it, you'll divide someday.\n");

    do {
        printf("bruh come on ");
    }
    while(giveApples() % 2 != 0);

    //for()
    //

    while(1) {
        if (giveApples() % 2 == 0) {
            printf("You deserve a break.\n");
            break;
        }
    }

    printf("Reached the end here\n");
    return EXIT_SUCCESS;
}
