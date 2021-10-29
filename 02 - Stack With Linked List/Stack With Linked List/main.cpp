/*****************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                   */
/** DATE    : 7 OCTOBRE 2021                                     */
/** VERSION : V01                                                */
/** HINT    : IMPLEMENT STACK USING LINKED LIST ( DYNAMIC STACK) */
/*****************************************************************/
#include"Stack.h"

int main()
{
    Stack<int> s1 ;
    Stack<char> s2 ;

    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.pop();          /** EXPECTED 12 */
    s2.pop();          /** EXPECTED "Stack Is Empty */
    s2.push('A');
    s2.push('B');
    s2.pop();          /** EXPECTED B */


    return 0;
}
