/****************************************
 *
 * Matthew Page
 * 
 * 11/13/2014
 * CSCS 1320
 *
 * nodefun.cc - A file for main function, 
 *              I think, building on last
 *              class.
 *
 ***************************************/

#include <cstdio>
#include "SinglyLinkedNode.h"

int main()
{
    int i;
    SinglyLinkedNode *start=NULL;
    SinglyLinkedNode *tmp=NULL;
    SinglyLinkedNode *tmp2=NULL;

    //setting up List of Singly Linked Nodes
    start=new SinglyLinkedNode(7);
    start->setNext(new SinglyLinkedNode(39));
    tmp=start->getNext();

    //inserting a new node
    tmp2=new SinglyLinkedNode(73);
    tmp2->setNext(start->getNext());
    start->setNext(tmp2);

    //setting tmp to point to starting node
    tmp=start;

    //print out our list with a loop
    while (tmp!=NULL)
    {
        printf("%d->", tmp->getValue());
        tmp=tmp->getNext();
    }
    printf("NULL\n");
    return (0);
}
