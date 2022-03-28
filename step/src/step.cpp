//============================================================================
// Name        : step.cpp
// Author      : vig
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "hello.h"
#include <iostream>
//#include <typeinfo>

using namespace std;

void sortBuble(int *arr, int size)
{
	int temp=0;
	for(int j=0;j<size-1;j++)
	for(int i=0;i<size-1-j;i++)
	{
		if (arr[i]>arr[i+1])
		{
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}

	for(int k=0;k<size;k++)
		std::cout<<arr[k];
	    std::cout<<endl;

}

int main() {

	hello *a;
	derived_from_hello b;

//	std::cout<<(*a).A<<std::endl;//error

	a=&b;


	a->say(3);

	std::cout<<"sizeof A"<<sizeof(*a)<<endl;//24 with virtual destr, 12 without virt descr

	std::cout<<"start"<<endl;

	std::cout<<"sizeof B"<<sizeof(b)<<endl;

//	int i;
//	cout<<typeid(i).name()<<std::endl;

	ooo oo;
	std::cout<<sizeof(oo);
//	derived_from_hello b;

//	a=b;

	//delete a;



	Laptop Laptop_instance;
	Laptop_instance.turn_on();
//	Laptop_instance.Device::turn_on();
//	static_cast<Monitor&>(Laptop_instance).turn_on();


int	array[10]={9,4,5,6,3,2,1,8,7,0};
sortBuble(array,10);





	return 0;
}
