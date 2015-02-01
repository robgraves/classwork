/************************************************
 *
 * Matthew Page
 *
 * 11/11/2014
 * CSCS 1320 
 *
 * next.cc - another file for something
 *
 *
 * *********************************************/

#include "SinglyLinkedNode.h"

SinglyLinkedNode * SinglyLinkedNode::getNext()
{
    return(this->next);
}

void SinglyLinkedNode::setNext(SinglyLinkedNode *next)
{
    this->next=next;
}
