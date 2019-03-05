/*
 * Lesson11.cpp
 *
 *  Created on: Nov 8, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std;

int main(){

	/*
	 * 0
	 * 1
	 * 0101 0110
	 *
	 * 126 = 1*10^2 + 2*10^1 + 6*10^0
	 *
	 * 1 0 1 0 = 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0
	 */

	/*
	 * Bitwise AND - &
	 * Bitwise OR - |
	 * Bitwize NOT - ~(tilda)
	 * Bitwise XOR - ^(caret) exclusice OR
	 *
	 * XOR
	 * a b c
	 * 0 0 0
	 * 0 1 1
	 * 1 0 1
	 * 1 1 0
	 *
	 * Bitwise leftshift <<
	 * Bitwise rightshift >>
	 */


	cout << (10 & 2)<< endl;

	/*
	 * 1 0 1 0
	 * 0 0 1 0
	 * -------
	 * 0 0 1 0
	 *
	 */

	cout << (10 | 2)<< endl;

		/*
		 * 1 0 1 0
		 * 0 0 1 0
		 * -------
		 * 0 0 1 0
		 *
		 */

	cout << (~10)<< endl;

		/*
		 * 1 0 1 0
		 * -------
		 * 0 1 0 1
		 *
		 */

	cout << (10 ^ 2)<< endl;

		/*
		 * 1 0 1 0
		 * 0 0 1 0
		 * -------
		 * 1 0 0 0
		 *
		 */

	cout << (10 << 1)<< endl;
	cout << (10 << 1)<< endl;

		/*
		 *   1 0 1 0
		 * -----------
		 * 1 0 1 0 0
		 *
		 *     1 0 1 0
		 * -----------
		 * 1 0 1 0 0 0
		 */

	cout << (10 >> 1)<< endl;

		/*
		 * 1 0 1 0
		 * 0 0 1 0
		 * -------
		 * 1 0 0 0
		 *
		 */



}


