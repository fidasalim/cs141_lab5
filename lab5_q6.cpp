// including library
#include <iostream>
using namespace std;
int main(){ 
	//Assigning variables
	int a1;
	cout<< "Type a year :"; 
	//reading the value
	cin >>a1 ;
	
	if(a1%4 == 0){//the year multiple of 4 is a leap year
		cout <<a1<<" is a leap year"<<endl;

	}

		else {//the year is not a  multiple of 4 is not a leap year
		cout <<a1<<" is not a leap year"<<endl;
	}

		
	return 0;
}
