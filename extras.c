#include "extras.h"

/* printWhoAmI:
 * Just a function to print my informations
 *
 * @param Me: My struct information
 */
void printWhoAmI (me Me) {
    printf("Name: %s;\n", Me.name);
    printf("Languages i code: {\n");
    printStrings(Me.code, LANGUAGES);
    printf("};\nSome goals: {\n");
    printStrings(Me.currentGoals, GOALS);
    printf("};\n");
}
