/* Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number */

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	//consider three variables
	int number,guess,tries=0;
	
	//seed random number generator
	srand(time(0)); 
	
	//random number between 1 and 100
	number=rand() % 100 + 1; 
	cout<<"Guess My Number Game\n\n";

	do
	{
		cout<<"Enter a guess between 1 and 100\n";
		cin>>guess;
		tries++;

		if(guess > number)
			cout<<"Too high!\n\n";
			
		else if(guess < number)
			cout<<"Too low!\n\n";
			
		else
			cout<<"\nCorrect! You got it in " <<tries <<" guesses!\n";
	}
	while(guess != number);

	return 0;
}
