/************************************************
 *
 * Matthew Page
 *
 * 11/11/2014
 * CSCS 1320 
 *
 * value.cc - another file for something
 *
 *
 * *********************************************/

#include "node.h"

void Node::setValue(int value)
{
    this->value=value;
}

int Node::getValue()
{
    return(this->value);
}
