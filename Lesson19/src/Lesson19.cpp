/*
 * Lesson19.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include<iostream>

using namespace std;

int main(){
	/*
	int i = 0;

	while (i++<10){
		cout << i<<endl;
	}

	while(0 or 1)
	*/
	int ii = 5;
	while(ii--){
		cout << ii <<endl;
	}

	const int SIZE = 10;
	int i = 0;
	int array[SIZE];

	while (i<SIZE){
		array[i] = 10*i;
		cout<< array[i] << endl;
		i++;//post increment
	}

	int j = 10;
	do{
		cout <<"lal";
	}while(j--);

}



