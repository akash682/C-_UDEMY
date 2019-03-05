/*
 * Lesson15.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include<iostream>

using namespace std;
//goto beginnning:
int main(){
	while(true){
		double var1, var2;
		int decision;

		cout << "Operation" << endl;
		cout << "Addition: 1" << endl;
		cout << "Subtraction: 2" << endl;
		cout << "Multiplication: 3" << endl;
		cout << "Divide: 4" << endl;
		cout << "End: 5" << endl;

		cin >> decision;

		if(decision==5){
			break;
		}
		cout << "Enter first number" << endl;
		cin >> var1;

		cout << "Enter second number" << endl;
		cin >> var2;

		switch(decision){
			case 1:
				cout << "var1 + var2 =" << (var1+var2) << endl;
				continue;
			case 2:
				cout << "var1 - var2 =" << (var1-var2) << endl;
				continue;
			case 3:
				cout << "var1 * var2 =" << (var1*var2) << endl;
				continue;
			case 4:
				cout << "var1 / var2 =" << (var1/var2) << endl;
				continue;
			default:
				cout << "You entered wrong number" << endl;
				continue;
		}
	}

}


