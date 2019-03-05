/*
 * lesson4.cpp
 *
 *  Created on: Nov 8, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std;

int main(){

	int a = 40, b, c = 20;//-2^32 to 2^32

	cout << "a:"<<a<<"address:" << &a << endl;
	cout << "b:"<<b<<"address:" << &b << endl;
	cout << "c:"<<c<<"address:" << &c << endl;

	short t1 = 5; // -32768 to 32867, 2Bytes = 2^16

	//float:4Bytes that are up to 38 zeros,
	//double:8Bytes that are up to 308 zeros,
	//char:
	//string:

	//Combine string
	string x = "part1";
	string y = "part2";
	string combinedStrings = x + " " + y;

	cout<< combinedStrings << endl;
	//boolean | true or false, false:0, true:1
	bool t6 = true;

	cout << t6 << endl;

	//unsigned short int, 0 to 65535
	unsigned short int t7 = 3700;
	cout << t7 << endl;

	//Unchangable
	const string NAMEOFGAME = "AkashLohani";

	cout<<NAMEOFGAME<<endl;

}


