#include <iostream>
#include "list.h"

using namespace std;

int main(int argc, char* const argv[]) {

	List ld;

	ld.insert(new Element(1));
	ld.insert(new Element(5));
	ld.insert(new Element(3));
	ld.insert(new Element(8));
	ld.insert(new Element(4));

	ld.show();

	cout << "Removing" << endl << endl;

	Element* e = NULL;
	if ((e = ld.remove(3)) != NULL) {
		cout << e->toString() << endl << endl;

		cout << "Removed" << endl << endl;
	}

	ld.show();

	cout << "Cleaning" << endl << endl;

	ld.free();

	cout << "Cleaned" << endl;

	ld.show();

	return 0;

}
