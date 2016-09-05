/*
 * node.cpp
 *
 *  Created on: 4 sep. 2016
 *      Author: daniel
 */

#include "node.h"

Node::Node() {
	this->element = NULL;
	this->next = NULL;
	this->before = NULL;
}

void Node::setElement(Element* element) {
	this->element = element;
}

Element* Node::getElement() {
	return this->element;
}

void Node::setNext(Node* next) {
	this->next = next;
}

Node* Node::getNext() {
	return this->next;
}

void Node::setBefore(Node* before) {
	this->before = before;
}

Node* Node::getBefore() {
	return this->before;
}
