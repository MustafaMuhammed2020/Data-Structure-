/**********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                            */
/** DATE    : 10 OCTOBRE 2021                             */
/** VERSION : V01                                         */
/** HINT    : IMPLEMENT STACK USING DOUBLE LINKED LIST    */
/**********************************************************/
#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

/** TO USE malloc() */
#include<stdlib.h>

template<class T>
/** CREATE DOUBLE NODE */
struct node
{
    T data ;              /** DATA */
    struct node* previous ; /** POINTER TO THE PREVIOUS NODE */
    struct node* next ;     /** PONTER TO THE NEXT NODE      */
};

template<class T>
class Stack
{
private:
    struct node<T>* SP = NULL ; /** (HEAD) STACK POINTER */

public:
    /** FUNCTION TO PUSH DATA TO STACK */
    void Push(int element)
    {
        /** CREATE DYNAMIC SPACE TO PUSH NODE */
        struct node<T>* new_node = (struct node<T>*)malloc(sizeof(struct node<T>));

        /** CHECK IF THERE IS FREE SPACE IN THE HEAP */
        if(new_node == NULL)
            cout<<"There Is No Free Space To Push\n";

        /** CASE FOR THE FIRST ELEMENT */
        if(SP == NULL)
        {
            new_node -> data = element ;   /** STORE THE DATA */
            new_node -> previous = NULL ;  /** PREVIOUS POINTS TO THE PREVIOUS NODE */
            SP = new_node ;                /** SP POIBTS TO THE LAST ADDED NODE */
            new_node->next = NULL;         /** NEXT OF ADDED NODE POINTS TO NULL */
        }
        else
        {
            new_node -> data = element ; /** STORE THE DATA */
            new_node -> previous = SP ;  /** PREVIOUS POINTS TO THE PREVIOUS NODE */
			SP -> next = new_node;       /** NEXT OF PREVIOUS POINTS TO THE ADDED NODE */
            SP = new_node ;              /** SP POINTS TO THE LAST ADDED NODE */
            new_node -> next = NULL ;    /** NEXT OF LASTNODE POINTS TO NULL */
        }
    }

    /** FUNCTION TO POP DATA FROM THE STACK */
    void Pop()
    {
      struct node<T>* Temp = SP ; /** TEPERATORY POINTER POINTS TO STACK */

      /** CHECK IF THE STACK IS EMPTY */
	  if(Temp == NULL)
		  cout<<"There Is No Data To pop\n";
	  else
	  {
		  cout<<Temp -> data<<endl; /** PRINT THE DATA OF LAST ADDED NODE */
		  SP = SP -> previous ;     /** SP POINTS TO THE NODE BEFORE THE LAST ONE */
		  SP -> next = NULL ;       /** THE NODE BEFORE THE LAST ONE BECOMES THE LAST IN THE STACK */
		  delete Temp ;             /** DELETE THE TEMPORARY POINTER TO AVOID DANGLING POINTER */
	  }
    }
};/** END OF STACK CLASS */

#endif // STACK_H
