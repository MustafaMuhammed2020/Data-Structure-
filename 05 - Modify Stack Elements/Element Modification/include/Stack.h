/*****************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                   */
/** DATE    : 12 OCTOBRE 2021                                    */
/** VERSION : V03                                                */
/** ADDED   : DELETE && SEARCH FOR ELEMENT                       */
/*****************************************************************/
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
            Temp -> data = element ;   /** STORE THE DATA IN Temp           */
            Temp -> next = sp ;        /** Temp POINTS TO THE PREVIOUS NODE */
            sp =  Temp ;               /** sp POINTS TO THE LAST ADDED NODE */
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
            cout<< Temp -> data <<endl;    /** PRINT THE DATA                       */
            sp = Temp -> next ;            /** sp POINTS TO THE NODE BEFORE THE TOP */
            delete Temp ;                  /** DELETE TEMP TO AVOID DANGLING        */
        }
    }

    /** FUNCTION TO DELETE ELEMENT FROM THE STACK */
    void Delete(T element)
    {
        struct node<T> * current  = NULL;  /** POINTER TO THE NODE WHICH WILL BE DELETED */
        struct node<T> * previous = NULL; /** POINTER TO TRACK THE PREVIOUS NODE        */

        struct node<T> * temp = sp ;    /** POINTER TO SP */

        for(temp ; temp != NULL ; temp = temp -> next)
        {
			/** CASE TO DELETE THE FIRST NODE IN THE STACK */
            if(temp->data == element)
            {
                sp = temp -> next ;
                temp -> next = NULL ;
            }

            /** CASE TO DELETE ANY OTHER NODE */
            else if(temp -> next -> data == element)
            {
                previous = temp ;
                current = previous->next ;
                previous -> next = current -> next ;
                delete temp ;
                //current -> next = NULL ;
            }
        }
    }

    /** FUNCTION TO SEARCH FOR ELEMENT */
    void searchFor(T element)
    {
        int Choice ; /** TO RECEIVE CHOICE FROM THE USER */
        T newdata ;  /** WILL CONTAIN THE MODIFIED VALUE FROM USER */

        struct node<T>* New = sp;

        for(New ; New != NULL ; New = New -> next) /** SEARCH FOR THEELEMENT */
        {
            if(New -> data == element)
            {
                cout<<element<<"  "<<"Existed\n";
                cout<<"Choose What To Do :\n";
                cout<<"1 - delete\n2 - modify\n";
                cin>>Choice;
                switch(Choice)
                {
                case 1 :
                    Delete(element);
                    break; /** DELETE THE ELEMENT FROM THE STACK */

                case 2:
                    cout<<"Enter The New Value\n"; /** MODIFY THE ELEMENT VALUE */
                    cin>>newdata;
                    New->data = newdata ;
                    break;

                default:
                    cout<<"No Choice\n";
                    break;
                }
                return ;
            }
        }
        cout<<element<<"  "<<"Not Existed\n";
    }
};

#endif // STACK_H
