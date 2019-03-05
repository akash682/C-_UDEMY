/*
 * Lesson13.cpp
 *
 *  Created on: Nov 8, 2018
 *      Author: Akash Lohani
 */
#include<iostream>

using namespace std;

int main(){
		int a;
		while(true){
			cin >> a;
			switch(a){
			case 0:
					cout << "a = 0"<< endl;
					continue;
			case 10:
					cout << "a = 10"<< endl;
					continue;
			case 20:
					cout << "a = 20"<< endl;
					continue;
			case 30:
					cout << "a = 30"<< endl;
					break;
			default:
					cout << "a != 0, 10,20,30" << endl;
					continue;
			}
		}
}



