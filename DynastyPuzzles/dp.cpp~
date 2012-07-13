#include<iostream>
#include<cstdio>
#include<limits>

using namespace std;

const int minv=numeric_limits<int>::min();
const int max_n=500000;

int n;
int fl[max_n],ll[max_n],sz[max_n];

int C[26];

int main()
{
	scanf("%d",&n);
	
	char tc[15];
	int tsz;
	for(int i=0; i<n; ++i)
	{
		scanf("%s",tc);
		for(tsz=0; tc[tsz]!='\0'; ++tsz);
		sz[i]=tsz;
		fl[i]=(int)(tc[0]-'a');
		ll[i]=(int)(tc[tsz-1]-'a');
	}
	
	int res=0;
	for(int l=0; l<26; ++l)
	{
		for(int j=0; j<26; ++j)
			C[j]=minv;
		C[l]=0;
		
		for(int i=0; i<n; ++i)
		{
			C[ll[i]]=max(C[ll[i]],C[fl[i]]+sz[i]);
			if(C[ll[i]]<0)
				C[ll[i]]=minv;
		}
		
		res=max(res,C[l]);
	}
	
	printf("%d\n",res);
	
	return 0;
}
