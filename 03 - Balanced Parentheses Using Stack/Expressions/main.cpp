/*****************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                   */
/** DATE    : 9 OCTOBRE 2021                                     */
/** VERSION : V01                                                */
/** HINT    : CHECK Balanced Parentheses                         */
/*****************************************************************/
#include <iostream>
using namespace std;

/** INCLUDE STACK CLASS */
#include"Stack.h"

/** RETURN TRUE WHEN {} , [] , () */
int Is_Pair(char element1 , char element2)
{
	int result ;

	if(element1 == '{' && element2 == '}')
		result = 1 ; /** NOT FALSE */

	else if(element1 == '[' && element2 == ']')
		result = 2 ; /** NOT FALSE */

	else if(element1 == '(' && element2 == ')')
		result = 3 ; /** NOT FALSE */

	else
		result = 0 ; /** FALSE */

	return result ;
}


/** FUNCTION TO CHECK Balanced Parentheses */
int Is_Correct(char str[])
{
	int letter = 0 , result ;

	/** STACK TO CONTAIN PARENTHESES */
	Stack<char> Expression ;

	while(str[letter] != '\0')
	{
		if(str[letter] == '{' || str[letter] == '(' || str[letter] == '[')
			Expression.push(str[letter]); /** STORE IN THE STACK */

		if(Is_Pair(Expression.Return_Top() , str[letter]))
			Expression.pop();   /** POP FROM THE STACK */

        letter++; /** INCREMENT LETTERS COUNTER */
	}

	if(Expression.Is_Empty())
		result = 1 ; /** NO PARENTHESES IN THE STACK */
	else
		result = 0 ;

	return result ;
}

int main()
{

    char name1[10] = "(2+2)[2]" ;    /** SAMPLE 1 */
	char name2[10] = "{2*2)(}" ;     /** SAMPLE 2 */
	char name3[10] = "(2+2}[2]" ;    /** SAMPLE 3 */

    if(Is_Correct(name1)) /** TRUE */
        cout<<"name 1 is Equal\n"; 

	if(Is_Correct(name2)) /** FALSE */
        cout<<"name 2 is Equal\n";

	if(Is_Correct(name3)) /** FALSE */
        cout<<"name 3 is Equal\n";

    return 0;
}
