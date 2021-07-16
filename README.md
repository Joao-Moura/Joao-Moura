# A little about Me
<details open>
	<summary>aboutMe.c</summary>
	
```C
#include "extras.h"

/* getMyInformation:
 * Get some of my informations :P
 *
 * @param code:		An array with things i like to code
 * @param currentGoals: Other array with my goals
 * @return:		A struct with my informations
 */
static struct whoAmI getMyInformation (char **code, char **currentGoals) {
    me Me = {.name = "João Pedro Moura Oliveira"};
    getStrings (Me.code, LANGUAGES, code);
    getStrings (Me.currentGoals, GOALS, currentGoals);
    Me.dots = "https://github.com/Joao-Moura/dots";
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
```
</details>

# Strange? Yeah! But how to compile ?
<details>
	<summary>make --no-print-directory run</summary>
	
```bash
./aboutMe
Name: João Pedro Moura Oliveira;
Languages i code: {
        C
        Assembly
        Python
        Java
        Shell
};
Some goals: {
        Learn more about OS
        Learn more about Compilers (Using Haskell)
        Learn cybersecurity
        Learn Elixer
};
```
</details>

### And how to clean ? (Things will go bye bye)
<details>
	<summary>make clean</summary>
	
```bash
rm -f aboutMe
```
</details>
