#include "SomeStuff.h"
#include <iostream>



int main() {


	CS52::SomeStuff a;
	


	/*a.push_back(10); 
	a.push_back(88);
	a.at(0) = 99;
	
	// ok std::cout << a << std::endl;*/
	


	//	/*Size is : 2;
	//	Capacity is : 2;
	//Contents: 99 88;*/


	//	//overloaded constructor, [] op, at, empty, clear, exception handling: at
	//CS52::SomeStuff b(2, 5);
	////ok std::cout << b << std::endl;
	/////*b is 5 5*/
	////	//Add more elements to b
	//b.push_back(10); b.push_back(2);
	//b.push_back(99); b.push_back(-5);
	//
	//// array index[]; at();
	//b[0] = 25; b[1] = 1;
	//b.at(0); b.at(1);
	/////*25 1*/
	//CS52::SomeStuff Obj;


	////	//empty method, size, and capacity
	//// ok  
	//// std::cout << b.empty() << std::endl;
	////false
	//// ok 
	// b.clear();
	// std::cout << b << std::endl;

	
	//	/*Size is : 0
	//	Capacity is : 8
	//	Contents :
	//	2024 © Dr.Scott Bishop | Associate Professor of Computer Science, Santa Monica College 5*/
	// ok std::cout << b.empty() << "\n";
	//	//Exception handling:
	CS52::SomeStuff b;

	////std::cout << b.at(9) << "\n";
	////	//out_of_bounds
	////	//copy constructor, copy assignment,
	////	//pop_back, capacity, size
	CS52::SomeStuff c(b);
	//////Add more elements to b
	//b.push_back(11); b.push_back(7);
	//b.push_back(3); b.push_back(23);
	//std::cout << c << b << "\n";

	///*Size is : 4*/
	//	/*Capacity is : 8
	//	Contents : 11 7 3 23*/
	//	//copy assignment

	CS52::SomeStuff d = c;
	///*d is 11 7 3 23*/
	//	//size vs capacity()
	d.size();// is 4
	d.capacity();// is 8

	std::cout << b << c << d <<
		d.size() <<
		d.capacity() << "\n";

	//	//pop_back()
		d.pop_back(); d.pop_back();
	////size vs capacity
	//d.size();// is 2 *
	//d.capacity();/* is 8*/
	std::cout << d.size() << d.capacity() << std::endl;

	//		/*Test overloaded + operator;*/
	//		/*m = [3, 3, 3, 3, 3], n = [55, 100, 500];
	//		o = m + n = [58 103 503];*/
	//		/*Test polymorphism*/
	//		//CS52::Something[0];/* is a*/  /* CS52::SomeStuff: 1 1;*/
	//		//CS52::Something[1]; /* is a*/  /*CS52::SomeStuff : 3 3 3 3 3;*/



		return 55555;

}