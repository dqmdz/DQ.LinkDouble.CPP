#include "element.h"

#include <sstream>

using namespace std;

Element::Element() {
	this->value = 0;
}

Element::Element(int value) {
	this->value = value;
}

void Element::setValue(int value) {
	this->value = value;
}

int Element::getValue() {
	return this->value;
}

string Element::toString() {
	stringstream ss;

	ss << this->value;
	return ss.str();
}
