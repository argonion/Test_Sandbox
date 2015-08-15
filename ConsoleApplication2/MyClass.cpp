#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
	cout << "MyClass Instantiated" << endl;
}


MyClass::~MyClass()
{
	cout << "MyClass ~destructor" << endl;
}


void MyClass::PrintCrap()
{
	cout << "PrintCrap()" << endl;
}