/*Stephen Dean Littlefield, CS 231-001, Metric Array, This program is
designed to take 10 integers store them in an array, find the highest
and lowest integer, and the average of all integers. The program will
then display this information to the user. Due: February 9, 2020*/

#include<iostream>
using namespace std;

int main()
{
	/*Set our array to an index of 10 positions as well as a few other variables 
	we will need to recieve and compare to find the largest numbers*/
	
	int myArray[10];
	int number;
	int smallestNumber = 101;
	int largestNumber = 0;
	
	//Let the user know what we want from them and recieve input
	
	cout << "Enter ten integers between 1 and 100, and I will tell you the smallest, the largest, and the average:" << endl;
	cin >> number;
	
	//Stop the user from entering an invalid input
	
	while((number <= 0) || (number >= 101))
	{
		cout << "Please enter a number between 1 and 100" << endl;
		cin >> number;
	}
	
	/*We will need to recieve 10 integers into our array and store them accordingly as long
	as they are within range of 1 through 100*/
	
	if ((0 < number) && (number < 101))
	{
		for(int i = 0; i < 10; i++)
		{	 
			myArray[i] = number;
			cout << "Please enter another number" << endl;
			cin >> number;
			
			/*We compare each number and store them if they meet the requirement to be the 
			smallest or largest number*/ 
			
			if( number > largestNumber)
				largestNumber = number;
			if( number < smallestNumber)
				smallestNumber = number;
		}
	}
	cout << "The largest number was: " << largestNumber << endl;
	cout << "The smallestnumber was: " << smallestNumber << endl;
}

