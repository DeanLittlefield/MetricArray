# MetricArray

## Table of contents

* [Introduction](#introduction)
* [The IDE Used](#the-ide-used)
* [Code Breakdown](#code-breakdown)
* [Boilerplate](#boilerplate)
* [Calling Int Main](calling-int-main)
* [Initiallizing Our Variables](initiallizing-our-variables)
* [For Loop #1](for-loop-#1)
* [For Loop #2](for-loop-#2)
* [Results](results)
* [Final Comments](final-comments)

## Introduction
A C++ program that accepts 10 integers and stores them into an array. The program then checks the array for the smallest integer, largest integer, and finds the average of the integers. The reason for creating this program was to become more familiar arrays.

## The IDE Used
This project was created with:
* [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/)

## Code Breakdown
I will be explaining, to the best of my ability, what is going on in this program. Keep in mind that I have basic knowledge in cpp programing and do not claim to know everything. Thank you for your time and I wish you a blessed day.

### Boilerplate
Let's take a quick look at the boilerplate. When I say boilerplate i am refering to this section of code:
```cpp
#include<iostream>
using namespace std;
```
We use `#include<iostream>` to read and write to the standard input/output stream. Basically this will allow us to recieve input via keyboard from the user through `cin` statements, and it will also allow us to display data to the user through `cout` statements.

Next you should notice the `using namespace std;`. What this does is tell the compiler that symbol names defined in the std namespace are to be brought into your program's scope, so you can omit the namespace qualifier. Without this we would have to continually write `std::` before each `cout` and `cin` statement. Below I will show a quick example of what this looks like with and without `using namespace std;`. 
### Examples
#### With Namespace std
```cpp
cout << "Hello";
cin >> number;
```
#### Without Namespace std
```cpp
std::cout << "Hello"; 
std::cin >> number;
```
This is a very basic example, but by including `using namespace std;` it will save us from having to retype `std::`. This will be usefull especially in bigger programs.

## Calling Int Main
Lets talk about calling `int main()`.
```cpp
#include<iostream>
using namespace std;

int main()
{
  cout << "Hello"; 
}
```
When the above snippet runs it will first call for the function `int main`. Every program needs this function because it is the entry point of the program. What it runs in the snippet above is what is between the curlly brackets. In our case it will simply print out *Hello*.

## Initiallizing Our Variables
```cpp
//Initialize the variables we will need.
	int number, myArray[10];
	int largestNumber = 0;
	int smallestNumber = 101;
	float sum = 0;
	float average = 0;
//Print a welcome message out to the screen. 
	cout << "Hello, please enter 10 digits between 1 and 100. I will tell you the smallest, the largest, and the average:" << endl;
  ```
  Above we can see a few variables that we will need in our program. We will see all of the variables in our code later. We will also use a `cout` statement to print what we want from the user. In this case we are asking for ten numbers between one and one hundred.
  
  ## For Loop #1
  ```cpp
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
  ```
  Okay we have finally made it to some code! There are quite a few things going on here. Lets break it down a little further.
  
  Lets focus on the following:
  ```cpp
  for(int i = 0; i < 10)
  {
    //increase i by one for each loop
    i++
  }
  ```
  What a `for()` loop does is execute a block of statements repeatedly until a particular condition is satisfied. In our case I intiallized a variable `int i` to equal zero, and while zero is less than ten we increase `int i` by one. That means this statement will run ten times before the condition is satisfied.
  ### If Statements
  Next we are ready to recieve our first number, but we need to make sure it is between one and one hundred. We can do this with two if statements.
  ```cpp
  cin >> number
  //first if statement that will only accept numbers between one and one hundred
  if((0 < number) && (number < 101))
  {
    cout << "This is a good number between one and one hundred.";
    }
  //second if statement that will deny all numbers less than one and greater than one hundred
  if((number <= 0) || (number >= 101))
  {
    cout << "Sorry the number entered needs to be between one and one hundred. Please enter a new number.";
    }
 ```
The way `if()` statements work is by evaluating the expressions inside the parenthesis. If the expression is evaluated to true then the block inside the curlly braces will execute. Remember that We want a number between one and one hundred. If we get a good number then the first if statement will run, and if we get a bad number the second if statement will run.

As stated earlier, if we get a good number then the first if statement will run. So this if statement will run if the number is between one and one hundred:
```cpp
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
```
This is what we want from the user. When we get the number we need to store it. I used an array called `myArray[i]` to store the ten numbers. Notice I used i inside the array. This is because I need to store ten integers, but remember that the `for()` loop will run ten times and increase i by one each time. We can use this array to keep track of each integer and place it in the appropriate sequence it was entered. 
Next the if statements will evaluate the number entered. Notice `largestNumber` is set to equal zero; while `smallestNumber` is set to one hundred and one. This may seem backwards but lets try to understand what the logic is behind this. Every possible number will be larger than zero, therefore we will save the first number to `largestNumber`. The same is true for the smallest number. Every number will be smaller than one hundred and one. So the first number will be saved as the new `largestNumber` and `smallestNumber`. Each number after the first will then be evaluated until the tenth number is entered. Each time these two `if()` statements will evaluate each subsequent number each time replacing the largest/smallest number if true.

## For Loop #2
Now that we have all ten integers it is time to add them together and get the average of the numbers. We can do this with another `for()` loop like the one below:
```cpp
//Read through our array, add up the integers, and get the average.
	for(int i = 0; i < 10; i++)
	{
		cout << "Your numbers for position[" << i << "] is:" << myArray[i] << endl;
		sum += myArray[i];
	}
  average = sum / 10;
```
Remeber that we used i in `myArray[i]` now we can read through each index of the array. Each time we do this we add that number to the variable `sum` with the operator `+=`. We then will divide the sum by ten to find the average and store this in the variable `average`.

## Results
Now that we have recieved the ten numbers, found the smallest/largest numbers, added them together, and found the average we need to let the user know the results. We can do this with the three `cout` statements shown below:
```cpp
//Print the largest, smallest, and average.
	cout << "The largest number was: " << largestNumber << endl;
	cout << "The smallest number was: " << smallestNumber << endl;
	cout << "The average of the numbers you entered is:" << average << endl;
```
## Final Comments
I hope this was somewhat helpful and cleared up any confusion on why and how this program works. Thanks again for your time.
