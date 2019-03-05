/*
 * Lesson23.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std;
// functions methods
// parameter

void welcome(){//declaration of function
	cout << "Hello" << endl;
}

bool isNumber(string temp){
	if (temp[0] == '0'){
		return false;
	}

	for (unsigned int i =0; i < temp.length(); i++){
		if(!(temp[i]>= 48 && temp[i]<= 57)){
			return false;
		}
	}

	return true;
}

void enterName(){
	string tmp;

		cout << "Enter the number: " << endl;
		cin >> tmp;

		if (isNumber(tmp)){
			cout << "Number entered properly" << endl;
		}else{
			cout << "Number entered improperly" << endl;
		}
}

double add(double a, double b){return a + b;};

void changeValueTo10 (int x){
	x = 10;
}

int main(){

	welcome();
	enterName();
	enterName();
	enterName();
	cout << add(4,5);

	int a = 5;
	changeValueTo10(a);

	cout << a;

}



