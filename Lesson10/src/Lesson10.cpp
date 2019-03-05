/*
 * Lesson10.cpp
 *
 *  Created on: Nov 8, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std;

int main(){

	/*
	 * AND conjuction &&
	 * 7>5 && 5!= 10 // conjunction is true ONLY if both expressions are true;
	 * 	a && b
		a	b	c
		0	0	0
		0	1	0
		1	0	0
		1	1	1

		a && b
		a	b	c
		0	0	0
		0	1	1
		1	0	1
		1	1	1

		a!
	 */

	cout << !(5>7 && 5!=10 )<< endl;
	cout << !(5>7 || 5!=10 )<< endl;

}

