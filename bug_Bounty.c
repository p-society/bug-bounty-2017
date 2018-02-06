
#include<bits/stdc++.h>
using namespace std;
long long int multiplyNumbers(int n);
struct fact{
	long long int x,n;
};
struct fact obj;
    long long int multiplyNumbers(int n)
    {
    if(n >=1)
        return(n *multiplyNumbers(n-1));
    else
    	return 1;
    }
int main()
{
	printf("Enter the number whose factorial you want to calculate: ");

    scanf("%lld",&obj.n);
	obj.x=multiplyNumbers(obj.n);
	printf("%lld",obj.x);
	return(0);
}
