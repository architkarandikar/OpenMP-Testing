#include<iostream>
#include<cstdio>

using namespace std;

const int modref=1000000007;
const int max_n=5000;
const int max_k=5000;

int n,k;
int cC[max_k+1];
int pC[max_k+1];

int main()
{
	scanf("%d%d",&n,&k);
	
	pC[0]=1;
	for(int ck=1; ck<=k; ++ck)
		pC[ck]=0;
	
	for(int cn=1; cn<=n; ++cn)
	{
		int chunk=max(k/8,1);
		cC[0]=1;
		#pragma omp parallel shared(cC,pC,chunk)
		{
			#pragma omp for schedule(dynamic,chunk)
				for(int ck=1; ck<=k; ++ck)
				{
					cC[ck]=pC[ck-1]+pC[ck];
					cC[ck]%=modref;
				}
		
			#pragma omp for schedule(dynamic,chunk)
				for(int ck=0; ck<=k; ++ck)
					pC[ck]=cC[ck];
		}
	}
	
	printf("%d\n",cC[k]);
	
	return 0;
}
