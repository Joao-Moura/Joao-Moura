#include <stdio.h>

#define LANGUAGES 	5
#define GOALS		4

#define getStrings(array, size, stuffs) {	\
    	    for (size_t i = 0; i < size; i++)	\
    		array[i] = stuffs[i];		\
    	}

#define printStrings(array, size) {		\
    	    for (size_t i = 0; i < size; i++)	\
    		printf("\t%s\n", array[i]);	\
    	}

/* whoAmI:
 * A little about myself
 *
 * @field name:        I guess this is my name ?
 * @field code:        My knowledges
 * @field currentGoal: Things i would like to learn
 */
struct whoAmI {
    char *name;
    char *code[LANGUAGES];
    char *currentGoal[GOALS];
    char *dots;
};
typedef struct whoAmI me;

static void printWhoAmI (me Me);

/* getMyInformation:
 * Get some of my informations :P
 *
 * @param code:        An array with things i like to code
 * @param currentGoal: Other array with my goals
 * @return: 	       A struct with my informations
 */
static struct whoAmI getMyInformation (char **code, char **currentGoal) {
    me Me = {.name = "João Pedro Moura Oliveira"};
    getStrings (Me.code, LANGUAGES, code);
    getStrings (Me.currentGoal, GOALS, currentGoal);
    Me.dots = "Here";
    return Me;
}

/* main:
 * The most powerfull function :O
 */
int main (void) {
    static char *languagesICode[] = {"C", "Assembly", "Python", "Java", "Shell"};
    static char *someGoals[] = {
	"Learn more about OS",
	"Learn more about Compilers (Using Haskell)",
	"Learn cybersecurity",
	"Learn Elixer"
    };

    me Me = getMyInformation(languagesICode, someGoals);
    printWhoAmI(Me);
    return 0;
}

/* printWhoAmI:
 * Just a function to print my informations
 *
 * @param Me: My struct information
 */
static void printWhoAmI (me Me) {
    printf("Name: %s;\n", Me.name);
    printf("Languages i code: {\n");
    printStrings(Me.code, LANGUAGES);
    printf("};\nSome goals: {\n");
    printStrings(Me.currentGoal, GOALS);
    printf("};\n");
}
