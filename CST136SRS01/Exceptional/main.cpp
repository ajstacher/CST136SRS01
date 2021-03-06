// Exceptional.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <limits.h>
#include <gsl.h>
#include "RangeInt.h"
#include <string>

using namespace std;
using namespace gsl;

int main()
{
	//vars 
	auto temp = 0;
	string str = "";

	RangeInt test;
	//RangeInt test2(20, 3);

	test.setUpper(20);
	test.setLower(2.0);

	//try with upper bound exclusion
	try {
		test.setValue(20);
	}
	catch (...) {		
		cout << "Value attempting to set is out of bounds! Would you like to reset bounds? (Y/N)" << endl;
		cin >> str; 
		if (str == "Y") {	
			cout << "new upper bound: ";
			cin >> str;
			test.setUpper(str);

			cout << endl << "new lower bound: ";
			cin >> str;
			test.setLower(str);	
		}
		else if (str == "N") {
			cout << "Please reset value between [" << test.getLower() << ", " << test.getUpper() << "): ";
			cin >> str; 
			try {
				test.setValue(str);	

			}
			catch(exception e)
			{
				auto message(e.what());
				cout << "Bad input, value not within bounds" << endl;
				cout << "Press any key then Enter to exit and retry\n";
				cin >> temp;
				return 0;
			}
		}
		else {
			cout << "Bad input" << endl;
			cout << "Press any key then Enter to exit and retry\n";
			cin >> temp;
			return 0;
		}
	
	}

	//debugging
	//cout << "get upper bound: " << test.getUpper() << endl;
	cout << "get value: " << test.getValue() << endl;
	cin >> temp;
	
    return 0;
}

