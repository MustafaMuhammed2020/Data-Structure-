/**********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                            */
/** DATE    : 16 OCTOBRE 2021                             */
/** VERSION : V01                                         */
/** HINT    : IMPLEMENT QUEUE USING LINKED LIST           */
/**********************************************************/
#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
#include<stdlib.h>

using namespace std ;

/** CREATE NODE STRUCTURE */
struct node
{
    int data ;
    struct node* next ;
};

class Queue
{
private:
    /** HEAD POINTS TO NULL IN THE BEGINING */
    struct node* head = NULL;

public:

    void push(int element)
    {
        /** RESERVE DYNAMIC STORAGE FOR NEW NODE */
        struct node* New = (struct node*) malloc(sizeof(struct node));

        /** CHECK THE RETURN FROM New */
        if(New == NULL)
            cout<<"There Is No Free Space To Push Data\n";

        else
        {
            New -> next = head ;    /** NEW ADDED NODE POINTS TO THE PREVIOUS ONE */
            New -> data = element ; /** STORE THE PASSED DATA                     */
            head = New ;            /** HEAD POINTS TO THE LAST ADDED NODE        */
        }
    }

    void pop(void)
    {
        /** CREATE TEMPERATORY NODE POINTS TO THE HEAD */
        struct node* temp = head ;
        struct node* deleted ;    /** POINTS TO THE NODE WE NEED TO POP */

        /** CHECK IF THE QUEUE IS EMPTY */
        if(temp == NULL)
            cout<<"There Is No Data To pop\n";
        else
        {
            for(temp ; temp != NULL ; temp = temp -> next)
            {
                /** CASE TO POP THE LAST ADDED ELEMENT */
                if(temp -> next == NULL)
                {
                    deleted = temp ;               /** DELETED POINTS TO THE LAST ADDED ELEMENT */
                    cout<< deleted -> data <<endl; /** PRINT THE DATA                           */
                    head = NULL ;                  /** HEAD RETURNS TO NULL AGAIN               */
                    delete deleted ;               /** DELETE THE POPED NODE                    */
                }

                /** CASE TO POP ANY OTHER ELEMENT */
                else if(temp -> next -> next == NULL )
                {
                    deleted = temp -> next ;       /** DELETED POITS TO THE NODE WE NEED TO POP */
                    cout<< deleted -> data <<endl; /** PRINT THE DATA                           */
                    temp -> next = NULL;           /** THE PREVIOUS NODE COMES THE LAST ONE     */
                    delete deleted ;               /** DELETE THE POPED NODE                    */
                }
            }
            delete temp ; /** TO AVOID DANGLING POINTER */
        }
    }
};

#endif // QUEUE_H
