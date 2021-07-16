#ifndef EXTRAS_H
#define EXTRAS_H

#include <stdio.h>

/* Some random numbers ? */
#define LANGUAGES 	5
#define GOALS		4

/* getStrings:
 * Macro to save some stuffs
 *
 * @param array:  where you are gonna save
 * @param size:   size of the array
 * @param stuffs: things to save
 */
#define getStrings(array, size, stuffs) {	\
    	    for (size_t i = 0; i < size; i++)	\
    		array[i] = stuffs[i];		\
    	}

/* printStrings:
 * Macro to print things
 *
 * @param array: where you are gonna save
 * @param size:  size of the array
 */
#define printStrings(array, size) {		\
    	    for (size_t i = 0; i < size; i++)	\
    		printf("\t%s\n", array[i]);	\
    	}

/* whoAmI:
 * A little about myself
 *
 * @field name:		I guess this is my name ?
 * @field code:		My knowledges
 * @field currentGoals: Things i would like to learn
 */
struct whoAmI {
    char *name;
    char *code[LANGUAGES];
    char *currentGoals[GOALS];
    char *dots;
};
typedef struct whoAmI me;

void printWhoAmI (me Me);

#endif
