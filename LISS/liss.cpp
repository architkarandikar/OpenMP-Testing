#include<iostream>
#include<cstdio>

using namespace std;

const int max_n=10000;
int n;
int A[max_n];
int liss[max_n];

int main()
{
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i)
		scanf("%d",&A[i]);
	
	for(int i=0; i<n; ++i)
	{
		liss[i]=1;
		for(int j=0; j<i; ++j)
		{
			if(A[j]<A[i])
				liss[i]=max(liss[i],liss[j]+1);
		}
	}
	
	printf("%d\n",liss[n-1]);
}

