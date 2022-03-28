/*
 * hello.cpp
 *
 *  Created on: Jan 28, 2022
 *      Author: osboxes
 */
#include <iostream>
using namespace std;

#include "hello.h"

hello::hello() {
	// TODO Auto-generated constructor stub
	std::cout<<"Base hello constructor"<<endl;
	A=0;B=0;Sum=A+B;
}

hello::~hello() {
	// TODO Auto-generated destructor stub
	std::cout<<"Base hello destructor"<<endl;
}

//hello::hello(const hello &other) {
	// TODO Auto-generated constructor stub

//}

//hello::hello(hello &&other) {
	// TODO Auto-generated constructor stub

//}

//hello& hello::operator=(hello &&other) {
	// TODO Auto-generated method stub

//}

hello& hello::operator=(const hello &other) {
	// TODO Auto-generated method stub

}


derived_from_hello::derived_from_hello(){
	std::cout<<"Derived from hello constructor"<<endl;
	D=1;
}

derived_from_hello::~derived_from_hello(){
//	hello::~hello();
	std::cout<<"Derived from hello destructor"<<endl;
}


