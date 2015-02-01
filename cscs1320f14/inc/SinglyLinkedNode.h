/************************************************
 *
 * Matthew Page
 *
 * 11/11/2014
 * CSCS 1320 
 *
 * SinglyLinkedNode.h - another file for something
 *
 *
 * *********************************************/

#ifndef _SINGLY_H
#define _SINGLY_H
#include "node.h"

class SinglyLinkedNode:public Node {
    public:
        SinglyLinkedNode();
        SinglyLinkedNode(int);
        SinglyLinkedNode *getNext();
        void setNext(SinglyLinkedNode *);
    private:
        SinglyLinkedNode *next;
};
#endif
