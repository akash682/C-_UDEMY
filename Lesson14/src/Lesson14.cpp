/*
 * Lesson14.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include<iostream>

using namespace std;

int main(){

	int a = 10;
	int b = 20;
	//Condition ? so instruction that will be executed if condition is true.


	string message = (a > b)? "a >b":"a<=b";

	cout << message << endl;
	cout << ((a > b  ? a : b)) +10 <<endl;

}


