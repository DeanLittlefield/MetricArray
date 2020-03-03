/*Stephen Dean Littlefield, CS 231-001, Metric Array, This program is
designed to take 10 integers store them in an array, find the highest
and lowest integer, and the average of all integers. The program will
then display this information to the user. Due: February 9, 2020*/

#include<iostream>
using namespace std;

int main()
{
	//Initialize the variables we will need.
	int number, myArray[10];
	int largestNumber = 0;
	int smallestNumber = 101;
	float sum = 0;
	float average = 0;
	//Print a welcome message out to the screen. 
	cout << "Hello, please enter 10 digits between 1 and 100. I will tell you the smallest, the largest, and the average:" << endl;
	
	//Start our loop for the array to store valid integers.
	for(int i = 0; i < 10;)
	{
		cin >> number;
		//Make sure the integer is between 1 and 100
		if((0 < number) && (number < 101))
		{
			myArray[i] = number;
			//Check each integer and store it if it meets the requirement to be the new largest/smallest integer.
			if( number > largestNumber)
				largestNumber = number;
			if( number < smallestNumber)
				smallestNumber = number;
			i++;
		}	
		//Deny negative integers or integers over 100.
		if((number <= 0) || (number >= 101))
		{
			cout << "Please enter a number between 1 and 100." << endl;
		}
	}
	//Read through our array, add up the integers, and get the average.
	for(int i = 0; i < 10; i++)
	{
		cout << "Your numbers for position[" << i << "] is:" << myArray[i] << endl;
		sum += myArray[i];
	}
	average = sum / 10;
	//Print the largest, smallest, and average.
	cout << "The largest number was: " << largestNumber << endl;
	cout << "The smallest number was: " << smallestNumber << endl;
	cout << "The average of the numbers you entered is:" << average << endl;	
}
