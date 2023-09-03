/* Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform */

#include<iostream>
using namespace std;

int main(){
	char ch;
	float num1,num2;
	
	cout<<"Please Enter a Operator + , - , * , / "<<endl;
	cin>>ch;
	
	cout<<"Enter Two Numbers"<<endl;
	cin>>num1>>num2;
	
	//Here we are using switch statement
	switch(ch){
		case'+':
			cout<<"Ans is "<<num1+num2;
		    break;
		    
		case'-':
		    cout<<"Ans is "<<num1-num2;
			break;
			
		case'*':
		    cout<<"Ans is "<<num1*num2;
			break;
			
		case'/':
		    cout<<"Ans is "<<num1/num2;
			break;
			
		default:
			cout<<"Please Enter a Valid Input ";	    		
	}
	return 0;
}
