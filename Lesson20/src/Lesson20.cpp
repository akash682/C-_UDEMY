/*
 * Lesson20.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std;

int main(){
/*
	int nr = 1234; // 4 digits
	int nrOfDigits = 1;

	cout << 1234/ 10 << endl;
	cout << 123/ 10 << endl;
	cout << 12/ 10 << endl;
	cout << 1/ 10 << endl;

	int temp = nr;
	while(temp /= 10){
		nrOfDigits++;
	}

	cout << "the number" << nr <<" has "<< nrOfDigits << "digits" << endl;
*/

	for(int i =1; i<=100; i++){
		for(int j =1; j<=100; j++){
			cout.width(5);
			cout << i*j <<" ";
		}
		cout << endl;
	}
}



