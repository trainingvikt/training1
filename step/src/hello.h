/*
 * hello.h
 *
 *  Created on: Jan 28, 2022
 *      Author: osboxes
 */

#ifndef HELLO_H_
#define HELLO_H_
#include <iostream>
using namespace std;

class hello {
public:

	int A;//1
	int B;//2
	int Sum;//3

	hello();
	virtual ~hello();//4,5
	hello(const hello &other);
	virtual int say(int x)
	{
		std::cout<<"say from hello"<<x<<std::endl;
		return x-1;
	}
//	hello(hello &&other);
//	hello& operator=(hello &&other);
	hello& operator=(const hello &other);
};


class derived_from_hello:public hello
{
public:
	int D;
	derived_from_hello();
	virtual ~derived_from_hello();
	virtual int say (int x) override
	{
		std::cout<<"hello from child"<<x<<std::endl;
		return x-1;
	}
};


class ooo
{

};


class Device{
public:
	Device(){cout<<"Device constructor"<<endl;}
	void turn_on()
	{
		cout<<"Device is turn on"<<endl;
	}
};

class  Comp:virtual public Device{
public:
	Comp(){cout<<"Comp constructor"<<endl;};
	void turn_on()
	{
		cout<<"Comp is on"<<endl;
	}
};

class Monitor:virtual public Device{
public:
	Monitor(){cout<<"Monitor constructor"<<endl;};
	void turn_on()
	{
		cout<<"Monitor is on"<<endl;
	}
};

class Laptop:public Comp, public Monitor{
public:
	void turn_on()
	{
		cout<<"Laptop is on"<<endl;
	}
	Laptop(){cout<<"Laptop"<<endl;}
};



#endif /* HELLO_H_ */
