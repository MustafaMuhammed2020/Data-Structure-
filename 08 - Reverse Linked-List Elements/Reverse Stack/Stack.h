/********************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                      */
/** DATE    : 7 OCTOBRE 2021                                        */
/** VERSION : V04                                                   */
/** HINT    : IMPLEMENT STACK USING LINKED LIST ( DYNAMIC STACK)    */
/** ADDED   : REVERSE STACK ELEMENTS WITHOUT USING ADDITIONAL STACK */
/********************************************************************/
#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#include <stdlib.h> /** TO USE malloc() */

template <class T> /** TO USE ANY TYPE OF DATA */

/** NODE DATA TYPE */
struct node
{
    T data ;             /** DATA ELEMENT */
    struct node * next ; /** POINTER TO THE NEXT NODE */
};

template <class T> /** USE ANT TYPE OF DATA */
class Stack
{
private:

    struct node<T> * sp = NULL ; /** HEAD OF THE STACK */

public:

    void push(T element)
    {
        /** DYNAMIC ALLOCATION TO CREATE SIZE OF NEW NODE TO WHICH WE POT WITH Temp */
        struct node<T> * Temp = (struct node<T>*)malloc(sizeof(struct node<T>));

        /** Temp WILL RETURN NULL IF HEAP IS FULL
            SO WE USE THIS FEATURE TO CHECK       */
        if(Temp == NULL)
            cout<<"No Free Space To Push Data\n";
        else
        {
            Temp -> data = element ; /** STORE THE DATA IN Temp           */
            Temp -> next = sp ;      /** Temp POINTS TO THE PREVIOUS NODE */
            sp =  Temp ;             /** sp POINTS TO THE LAST ADDED NODE */
        }
    }

    void pop(void)
    {
        /** POINTER WHICH POTS TO sp(LAST ADDED NODE) */
        struct node<T> * Temp = sp ;

        /** CHECK IF THERE IS NO DATA IN THE STACK */
        if(Temp == NULL)
            cout<<"Stack Is Empty\n";

        else
        {
            cout<<Temp -> data <<endl;    /** PRINT THE DATA                      */
            sp = Temp -> next ;          /** sp POINTS TO THE NODE BEFORE THE TOP */
            delete Temp ;                /** DELETE TEMP TO AVOID DANGLING        */
        }
    }

    /** FUNCTION TO REVERSE ELEMENTS */
    void Reverse_Elements(void)
    {
        struct node<T>* Curr = sp ;         /** POINTER TO THE HEAD                */
        struct node<T>* Prev = NULL ;       /** POINTER TO THE PREVIOUS NODE       */
        struct node<T>* Next = Curr->next ; /** POINTER HOLDS THE REST NODES       */

        /** UNTILL REACHING THE LAST NODE */
        while(Curr != NULL)
        {
            Next = Curr -> next ;
            Curr -> next = Prev ;
            Prev = Curr;
            Curr = Next;
        }
        sp = Prev ; /** HEAD POINTS TO THE NEW HEAD */
    }

    /** FUNCTION TO DISPLAY ALL ELEMENTS */
    void Display(void)
    {
        for(sp ; sp != NULL ; sp = sp -> next)
        {
            cout<<sp->data<<endl;
        }
    }
};

#endif // STACK_H
