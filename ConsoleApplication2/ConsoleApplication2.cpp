// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyClass.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char a;
	MyClass MyClassObject;
	cout << "Hello World!" << endl;
	MyClassObject.PrintCrap();
	//~MyClassObject;
	
	a = getchar();
	return 0;
}

