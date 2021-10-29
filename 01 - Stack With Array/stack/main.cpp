/******************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                       */
/** DATE     : 6 OCTOBRE 2021                         */
/** VERSION  : V01                                    */
/** HINT     : IMPLEMENT STACK BASED ON ARRAY         */
/******************************************************/
#include"Stack.h"

int main()
{
    /** EACH STACK HAS EACH OWN SPACE */
	Stack<int>S1 ;
	Stack<double>S2 ;
	Stack<char>S3 ;

	S1.push(1);
	S1.push(2);
	S1.push(3);
	S1.pop(); /** EXPECTED 3 */

	S2.push(3.14);
	S2.push(2.5);
	S2.push(1.1);
	S2.pop(); /** EXPECTED 1.1 */

	S3.push('A');
	S3.push('D');
	S3.pop();  /** EXPECTED D */
    return 0;
}
