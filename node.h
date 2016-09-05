/*
 * node.h
 *
 *  Created on: 4 sep. 2016
 *      Author: daniel
 */

#ifndef NODE_H_
#define NODE_H_

#include "element.h"

class Node {
public:
	Node();
	void setElement(Element*);
	Element* getElement();
	void setNext(Node*);
	Node* getNext();
	void setBefore(Node*);
	Node* getBefore();

protected:

private:
	Element* element;
	Node* next;
	Node* before;
};

#endif /* NODE_H_ */
