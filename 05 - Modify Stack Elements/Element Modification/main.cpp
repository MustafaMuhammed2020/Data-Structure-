/*****************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                   */
/** DATE    : 12 CTOBRE 2021                                     */
/** VERSION : V01                                                */
/*****************************************************************/
#include"Stack.h"

int main()
{
    Stack<int> s1 ;
    Stack<char> s2 ;

    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(2);
    s1.pop();          /** EXPECTED  2          */
    s1.searchFor(12);  /** EXPECTED EXISTED     */
    s1.searchFor(11);  /** EXPECTED EXISTED     */
    s1.pop();          /** EXPECTED 10          */


    s2.pop();          /** EXPECTED "Stack Is Empty */
    s2.push('A');
    s2.push('B');
    s2.pop();          /** EXPECTED B */
    s2.searchFor('B'); /** EXPECTED NOT EXISTED */
    return 0;
}
