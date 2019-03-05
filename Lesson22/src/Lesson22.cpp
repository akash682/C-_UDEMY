/*
 * Lesson22.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std;
int globalVariable;

int main(){
/*
	//int localVariablel;
	int localVariable;

	cout << "value of localvariable: " << localVariable << endl;
	cout << "value of globalvariable: " << globalVariable << endl;

	int a = 10;
	int result = a*10;
	if(a == 10){
		//int result = a*10;
	}

	cout << result << endl;
*/

	int result=0;//random number
	int nr,i;

	for (i =0; i<3; i++){
		cout<<"Enter "<< (i+1) << "number" << endl;
		cin >> nr;
		result += nr; // result = result + nr;
	}

	cout << result <<endl;
	cout << "we added " << i << " numbers" << endl;

}



