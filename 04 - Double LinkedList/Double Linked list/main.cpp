/**********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                            */
/** DATE    : 10 OCTOBRE 2021                             */
/** VERSION : V01                                         */
/** HINT    : IMPLEMENT STACK USING DOUBLE LINKED LIST    */
/**********************************************************/

#include"Stack.h"

int main()
{
    Stack<int> s1 ;      /** STACK OF INTEGERS */
    Stack<char> s2 ;     /** STACK OF CHARACTERS */
    /** S1 ELEMENTS */
    s1.Push(44);
    s1.Push(44);
    s1.Push(44);
    s1.Push(12);
    s1.Pop();      /** EXPECTED 12 */

    /** S2 ELEMENTS */
    s2.Pop();        /** EXPECTED NO ELEMENTS TO POP */
    s2.Push('A');
    s2.Push('V');
    s2.Push('C');
    s2.Pop();       /** EXPECTED C */

    return 0;
}
