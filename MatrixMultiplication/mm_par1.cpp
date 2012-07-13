#include<iostream>
#include<cstdio>
#include<omp.h>

using namespace std;

const int max_l=500;
const int max_m=500;
const int max_n=500;

int l,m,n;
int P[max_l][max_m];
int Q[max_m][max_n];
int R[max_l][max_n]={0};

int main()
{
	scanf("%d%d%d",&l,&m,&n);
	
	for(int i=0; i<l; ++i)
		for(int j=0; j<m; ++j)
			scanf("%d",&P[i][j]);
	
	for(int i=0; i<m; ++i)
		for(int j=0; j<n; ++j)
			scanf("%d",&Q[i][j]);
	
	int chunk=max(l/8,1);
	#pragma omp parallel shared(R,chunk)
	{
		#pragma omp for schedule(dynamic,chunk) nowait
			for(int i=0; i<l; ++i)
				for(int j=0; j<n; ++j)
					for(int k=0; k<m; ++k)
						R[i][j]+=(P[i][k]*Q[k][j]);
		
	}
	
	for(int i=0; i<l; ++i)
	{
		for(int j=0; j<n; ++j)
			printf("%d ",R[i][j]);
		printf("\n");
	}
}

