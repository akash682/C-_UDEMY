/*
 * Lesson18.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std; // @suppress("Symbol is not resolved")

int main(){
	/*
	 * for (initialization; condition; inc/dec){
	 * 		instruction-to-repeat
	 */

	for (int i = 0; i < 5; i++){
		cout<< i <<endl;
	}

	int arr[4];

	for(int i=0; i<4; i++){
		arr[i] = i;
	}


	//infinite loop
	for(;;){
		cout<<"lala"<<endl;
	}

	for(int i=0; i<5;){
			cout<<"lala"<<endl;
	}
}


