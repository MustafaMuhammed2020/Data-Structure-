/**********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                            */
/** DATE    : 16 OCTOBRE 2021                             */
/** VERSION : V01                                         */
/** HINT    : IMPLEMENT QUEUE USING LINKED LIST           */
/**********************************************************/
#include"Queue.h"

int main()
{
    Queue Q1 ;
    Q1.push(0);
    Q1.push(1);
    Q1.push(2);
    Q1.push(3);
    Q1.push(4);
    Q1.push(5);

    Q1.pop();   /** EXPECTED 0 */
    Q1.pop();   /** EXPECTED 1 */
    Q1.pop();   /** EXPECTED 2 */
    Q1.pop();   /** EXPECTED 3 */
    Q1.pop();   /** EXPECTED 4 */
    Q1.pop();   /** EXPECTED 5 */
    Q1.pop();   /** EXPECTED NO DATA TO pop */
    Q1.pop();   /** EXPECTED NO DATA TO pop */
    Q1.push(10);
    Q1.push(20);
    Q1.pop();   /** EXPECTED 10 */
    Q1.pop();   /** EXPECTED 20 */
    Q1.pop();   /** EXPECTED NO DATA TO pop */
    Q1.pop();   /** EXPECTED NO DATA TO pop */








    return 0;
}
