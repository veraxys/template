#include <iostream>



class Employee{
	string name;
	string position;
	int age;


	Employee(string name2="Damian",string position2="salesman", int age2=20)
	{
		name=name2;
		position=position2;
		age=age2;
	}
	~Employee()
	{}
};
