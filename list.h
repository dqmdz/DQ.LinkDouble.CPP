/*
 * list.h
 *
 *  Created on: 4 sep. 2016
 *      Author: daniel
 */

#ifndef LIST_H_
#define LIST_H_

#include "node.h"

class List {
public:
	List();
	void setLastInsert(Node*);
	Node* getLastInsert();
	void insert(Element*);
	Element* remove(int);
	void free();
	void show();

protected:

private:
	void insertNext(Node*);
	void insertBefore(Node*);
	void goInit();
	Element* removeFound();

	Node* lastInsert;
};

#endif /* LIST_H_ */
