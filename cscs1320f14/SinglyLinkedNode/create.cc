/************************************************
 *
 * Matthew Page
 *
 * 11/11/2014
 * CSCS 1320 
 *
 * create.cc -  another create.cc file for 
 *              something.
 *
 * *********************************************/

#include "SinglyLinkedNode.h"

SinglyLinkedNode::SinglyLinkedNode()
{
    this->setValue(0);
    this->next=NULL;
}

SinglyLinkedNode::SinglyLinkedNode(int value)
{
    this->setValue(value);
    this->next=NULL;
}

