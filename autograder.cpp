//Name: Sean Jordan
//SDI: 1949577
//Submission Date: 11/29/2024
//ASsignment Number 04





#include "SomeStuff.h"
#include <iostream>
#include <cassert>



using namespace CS52;





int main() {


	SomeStuff a;
	
	    for (int i = 0; i < 100; i++) {
		a.push_back(i);

	}
			
	assert(a.size() == 0);
	assert(a.capacity() == 0);
	std::cout << "Default constructor test passsed. \n";

	SomeStuff b(5, 10);
	assert(b.size() == 5);
	for (int i = 0; i < 5; ++i) {
		assert(b[i] == 10);

	}
	std::cout << "Overloaded constructor test passed. \n";

	SomeStuff c(b);
	assert(c.size() == b.size());
	for (int i = 0; i < c.size(); ++i) {
		assert(c[i] == b[i]);

	}
	std::cout << "COpy constructor test passed. \n";

	SomeStuff d(std::move(b));
	assert(b.size() == 0);
	assert(d.size() == 5);
	std::cout << "Move constructor test passed \n";


	SomeStuff e;
	e = c;
	assert(e.size() == c.size());
	for (int i = 0; i < e.size(); ++i) {
		assert(e[i] == c[i]);

	}
	std::cout << "Copy assignment operator test passed. \n";

	SomeStuff f;
	f = std::move(c);
	assert(c.size() == 0);
	assert(f.size() == 5);
	std::cout << "Move assignemnt is passed \n";

	f.push_back(15);
	assert(f.size() == 6);
	assert(f[5] == 15);
	std::cout << "push_back test has passed\n";

	f.pop_back();
	assert(f.size() == 5);
	std::cout << "pop_back test is paseed \n";

	assert(!f.empty());
	f.clear();
	assert(f.size() == 0);
	assert(f.empty());
	std::cout << "Clear and empty tests are passed\n";

	SomeStuff g(2, 5);
	SomeStuff h(2, 2);
	SomeStuff i = g + h;
	assert(i.size() == 5);
	assert(i[0] == 5 && i[3] == 2);
	std::cout << "Operator tests is passed \n";
	assert(a.type() == "SomeStuff(Type tested passed) \n");


	try {
		i.at(10);

	}
	catch (const std::out_of_range& e) {
		std::cout << "at exception handle test is passed \n" << e.what() << "\n";




	}


	std::cout << "Content of somestuff" << i << "\n";
	std::cout << "Stream insertion operator test passed \n";


	return 55555;
}
