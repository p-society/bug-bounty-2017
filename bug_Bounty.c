#include <stdio>

struct fact{
	long long int x,n;
}                                                                     //missing semi-colon

int f;                                                                //this is just to fool them. Using this as example, we can show them that codebases can be cleaned by removing unnecessary things

int multiplyNumbers(obj.n)                                            //return type and parameter should match structure's data types of the variables.
{
    if (n >= 1)
        return (n * multiplyNumbers(obj.n--));                        //It should be --obj.n instead of obj.n--. Further, obj is not declared here. So they need to find a way to remove this error.
    else                                                              //In the above return statement, it can be optimised to --n instead of --obj.n Using this as an example, we can show that it is really important in open source to write codes in such a manner that everyone can understand it easily.
     	return 2;                                                     //return 1

bool main()
{
	print("Enter the number whose factorial you want to enter: ");    //should be printf
	fact obj;                                                         //have to declare it globally to make it visible in the above function
	scanf("%d %d",&x,&n);                                             //x is not needed to input here. This is a point of improvement in the code.
	obj.x=multiplyNumbers(obj.n);
	print("obj.x");
}

Aim of this bug bounty.......optimise this code and make it completely clean. There should be no WARNINGS and ERRORS on compiling.

compilatin: gcc bug_bounty.c
// Correct solution: ----------------------------------------------------------

#include <stdio.h>

struct fact{
	long long int x,n;
}obj;

long long int multiplyNumbers(int n)
{
    if (n >= 1)
        return (n * multiplyNumbers(--n));
    else
     	return 1;
 }

int main()
{
	printf("Enter the number whose factorial you want to enter: ");
	scanf("%lld", &obj.n);
	obj.x=multiplyNumbers(obj.n);
	printf("%lld",obj.x);
}
