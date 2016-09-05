#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <string>

using namespace std;

class Element {
public:
    Element();
    Element(int);
    void setValue(int);
    int getValue();
    string toString();
private:
	int value;
};

#endif /* ELEMENT_H_ */
