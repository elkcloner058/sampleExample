#include<iostream>
#include<string.h>
using namespace std;
//This is the first line added from hira vai's PC on 220515 
//a comment is added 
long c[2000][2000];
int max(long a, long b)
{
	if(a>b)
		return a;
	else
		return b;
}
int lcs_length(char *x,char *y,int m , int n)
{
    int i,j;
	
	for(i=0;i<=m;i++)
		c[i][0]=0;
	for(j=0;j<=n;j++)
		c[0][j]=0;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
				c[i][j] = c[i-1][j-1] +1;
			else
				c[i][j] = max(c[i][j-1],c[i-1][j]);
		
		}


return c[m][n];
}
int main()
{

	char f_str[2000],s_str[2000];

	while(scanf("%s %s",f_str,s_str)!=EOF)
	{
		int len1 = strlen(f_str);
		f_str[len1]='\0';
		int len2 = strlen(s_str);
		s_str[len2]='\0';

		int length = lcs_length(f_str,s_str,len1,len2);

		cout<<length<<endl;




	}










return 0;
}
