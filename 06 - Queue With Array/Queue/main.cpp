/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 14 OCTOBRE 2021                              */
/** VERSION : V01                                          */
/** HINT    : IMPLEMENT QUEUE USING ARRAY                  */
/***********************************************************/
#include"Queue.h"
int main()
{
    /** CREATE TO DIFFERENT QUEUES */
    Queue<int>  Q1;
    Queue<char> Q2;

    /** FILL Q1 */
    Q1.push(12);
    Q1.push(11);
    Q1.push(10);
    Q1.push(9);
    Q1.push(0);

    Q1.pop(); /** EXPECTED 12 */
    Q1.pop(); /** EXPECTED 11 */
    Q1.pop(); /** EXPECTED 10 */
    Q1.pop(); /** EXPECTED 10 */
    Q1.pop(); /** EXPECTED 0 */
    Q1.pop(); /** EXPECTED NO ELEMENTS TO POP */
    Q1.pop(); /** EXPECTED NO ELEMENTS TO POP */

    /** FILL Q2 */
    Q2.push('A');
    Q2.push('v');

    Q2.pop(); /** EXPECTED A */
    Q2.pop(); /** EXPECTED A */
    Q2.pop(); /** EXPECTED NO ELEMENTS TO POP */
    Q2.push('Z');
    Q2.pop(); /** EXPECTED Z */

    return 0;
}
