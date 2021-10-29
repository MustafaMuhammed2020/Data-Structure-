/********************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                      */
/** DATE    : 7 OCTOBRE 2021                                        */
/** VERSION : V04                                                   */
/** HINT    : IMPLEMENT STACK USING LINKED LIST ( DYNAMIC STACK)    */
/** ADDED   : REVERSE STACK ELEMENTS WITHOUT USING ADDITIONAL STACK */
/********************************************************************/
#include"Stack.h"

int main()
{
    Stack<int> S1;

    S1.push(1);
    S1.push(2);
    S1.push(3);
    S1.push(4);
    S1.push(5);
    S1.push(6);
    S1.push(7);

    S1.Reverse_Elements();

    S1.Display(); /** EXPECTED 1,2,3,4,5,6,7 */

    return 0;
}
