/******************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                       */
/** DATE     : 6 OCTOBRE 2021                         */
/** VERSION  : V01                                    */
/** HINT     : IMPLEMENT STACK BASED ON ARRAY         */
/******************************************************/
#ifndef STACK_H
#define STACK_H

/** TO USE cout */
#include <iostream>
using namespace std;

/***************************************************/
/***************   HINT   **************************/
/** IF YOU WANT ALL OBJECTS TO SHARE THE SAME SPACE*/
/** DEFINE THE TOP AS GLOBAL VARIABLE OTHERWISE    */
/** DEFINE IT AS PRIVATE MEMBER                    */
/***************************************************/
#define Stack_Size    50

/** ABSTRACT TYPE FOR STACK CONTENT */
template <class T>

class Stack
{
	private:
	T Stack_Arr[Stack_Size];

	/** STACK COUNTER */
    signed int Stack_top = -1 ;

	public:

	/** FUNCTION TO PUSH DATA */
	void push(T element)
	{
		/** CHECK IF THERE IS NO SPACE */
		if(Stack_top == (Stack_Size - 1))
		    cout<<"There Is No Free Space To Push\n";
	    else
	    {
		    Stack_top++; /** INCREMENT THE COUNTER */
		    Stack_Arr[Stack_top] = element; /** STORE THE ELEMENT */
	    }
	}

	/** FUNCTION TO POP DATA */
	void pop()
	{
		/** CHECK IF THERE IS NO ELEMENTS */
		if(Stack_top == -1)
			cout<<"There Is No Data To pop\n";
		else
		{
			cout<<Stack_Arr[Stack_top]<<endl; /** PRINT THE Stack_top ELEMENT */
			Stack_top--;                /** DECREMENT THE COUNTER */
		}
	}
};/** END OF CLASS */

#endif // STACK_H
