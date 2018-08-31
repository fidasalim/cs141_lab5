// including library
#include <iostream>
using namespace std;
int main(){ 
	//Assigning variables
	float a1;
	cout<< "Type a integer :"; cin >>a1 ;
	//condition
	if(a1 > 0){// if a is positive integer
		cout <<"The integer "<<a1<<" is positive"<<endl;

	}
		else if (a1 == 0){// if a is zero
		cout <<"The integer "<<a1<<" is zero"<<endl;

	}	
		else {// if a is negative integer
		cout <<"The integer "<<a1<<" is negative"<<endl;

	}

		
	return 0;
}
