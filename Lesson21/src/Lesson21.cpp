/*
 * Lesson21.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: Akash Lohani
 */

#include <iostream>

using namespace std;

int main(){
/*
	for(int i =1; i<=10; i++){
		if(i==5){
			continue;
		}

		if(i==9){
			break;
		}

		for(int j=1; j<=10; j++){

			cout.width(4);
			cout<<i*j;
		}
		cout<<endl;
	}
*/
	for (int i =1,j=1; i<=10; i++){
		cout.width(4);
		cout << i*j;

		if (i==10){
			j++;
			i=0;
			cout<< endl;
		}

		if(j == 10 + 1){
			break;
		}
	}
}



