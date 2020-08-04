// clang version 10.0.0
// Target: x86_64-pc-linux-gnu
// Thread model: posix
// InstalledDir: /usr/bin
/* structure: insertion sort algorithm
 * MON 03 AUG 2020 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

// from Fig2.2
int32_t  inArray[]      = { 5,2,4,6,1,3 };
uint32_t inArrayLength  = sizeof(inArray)/sizeof(int32_t);

// minor edits to the pseudocode -- as the array index starts off at 1 in CLRS
int main(void) {
    // changed j from 2 to 1
    for (uint32_t j=1; j < inArrayLength; j++) {
        int32_t key = inArray[j];
        // insert inArray[j] into the sorted seq inArray[1,...,j-1]
        int32_t i = j-1;
        // included 0 into the range of i
        while (i >= 0 && inArray[i] > key) {
                inArray[i+1] = inArray[i];
                i--;
        }
        inArray[i+1] = key;
    }

    // print out inArray
    for (uint32_t i = 0; i < inArrayLength; i++) {
        printf("%"PRId32" ", inArray[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
