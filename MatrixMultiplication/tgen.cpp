#include<iostream>
#include<cstdio>
#include<sstream>
#include "MersenneTwister.h"

using namespace std;

int seed;
int main()
{
	scanf("%d",&seed);
	MTRand R(seed);
	
	int l=R.randInt(10)+490;
	int m=R.randInt(10)+490;
	int n=R.randInt(10)+490;
	
	printf("%d %d %d\n",l,m,n);
	
	printf("\n");
	
	for(int i=0; i<l; ++i)
	{
		for(int j=0; j<m; ++j)
			printf("%d ",(int)(R.randInt(2000)-1000));
		printf("\n");
	}
	
	printf("\n");
	
	for(int i=0; i<m; ++i)
	{
		for(int j=0; j<n; ++j)
			printf("%d ",(int)(R.randInt(2000)-1000));
		printf("\n");
	}
}
