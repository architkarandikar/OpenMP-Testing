#include<iostream>
#include<cstdio>
#include<sstream>
#include "MersenneTwister.h"

using namespace std;

int n=500000;
int seed;
char s[15]; int slen;

int main()
{
	scanf("%d",&seed);
	
	printf("%d\n",n);
	
	MTRand R(seed);
	for(int i=0; i<n; ++i)
	{
		slen=R.randInt(9)+1;
		for(int j=0; j<slen; ++j)
		{
			s[j]=((char)('a'+R.randInt(25)));
		}
		s[slen]='\0';
		printf("%s\n",s);
	}
	
	return 0;
}
