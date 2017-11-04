//Aim of this bug bounty.......optimise this code and make it completely clean. There should be no WARNINGS and ERRORS on compiling.

//compilatin: gcc bug_bounty.c


#include <stdio>

struct fact{
	long long int x,n;
}

int f;

int multiplyNumbers(obj.n)
{
    if (n >= 1)
        return (n * multiplyNumbers(obj.n--)); 
    else
    	return 2;

bool main()
{
	print("Enter the number whose factorial you want to enter: ");
	fact obj;
	scanf("%d %d",&x,&n);
	obj.x=multiplyNumbers(obj.n);
	print("obj.x");
}

