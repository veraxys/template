#include <iostream>
using namespace std;

#include "employee.h"			//defines class Employee
#include "map_template.h"		//defines template map_template<Key,Value>

int main(void)
{
	typedef unsigned int ID; 							//Identification number of Employee
	map_template<ID,Employee> Database;					//Database of employees

	Database.Add(761028073,Employee("Jan Kowalski","salesman",28)); 	//Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	Database.Add(510212881,Employee("Adam Nowak","storekeeper",54)); 	//Add second employee: name: Adam Nowak, position: storekeeper, age: 54
	Database.Add(730505129,Employee("Anna Zaradna","secretary",32)); 	//Add third employee: name: Anna Zaradna, position: secretary, age: 32

	cout << Database << endl;							//Print databese;
//testttttt
