/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 14 OCTOBRE 2021                              */
/** VERSION : V01                                          */
/** HINT    : IMPLEMENT QUEUE USING ARRAY                  */
/***********************************************************/
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

/** MACRO TO SET QUEUE SIZE */
#define Queue_Size    10

/** GLOBAL ARRAY TO BE USED IN ALL FUNCTIONS */
template <class T>
T Queue_Arr[Queue_Size];

template <class T>
class Queue
{
private:
  signed int Push_Counter = -1 ;       /** INCREMENTS WITH EVERY PUSH       */
  int Available_pop = 0 ;              /** COUNTS NUMBER OF PUSH OPERATIONS */
  int pop_counter   = 0 ;              /** INCREMENTS WITH EVERY POP        */

public:

/** FUNCTION TO PUSH ELMENT */
void push(T element)
{
	/** CHECK IF THERE IS PLACE TO PUSH */
	if(Push_Counter == (Queue_Size - 1) )
		cout<<"There Is No Place To Push\n";
	else
	{
		Push_Counter++;                        /** UPDATE THE COUNTER                */
    Available_pop++;                       /** INCREASE AVAILABLE POP OPERATIONS */
		Queue_Arr<T>[Push_Counter] = element ; /** STORE THE ELEMENT                 */
	}
}

/** FUNCTION TO POP ELEMENT */
void pop(void)
{
	/** CHECK IF THE QUEUE IS EMPTY */
	/** AVAILABLE POP MUST BE GREATER THAT POP_COUNTER TO POP ELEMENT */
	if(pop_counter == Queue_Size || (pop_counter >= Available_pop))
		cout<<"There Is No Elements TO POP\n";
	else
	{
		cout<<Queue_Arr<T>[pop_counter]<<endl; /** PRINT THE FIRST PUSHED VALUE */
		pop_counter++ ;                        /** UPDATE POP COUNTER           */
	}
}
};

#endif // QUEUE_H
