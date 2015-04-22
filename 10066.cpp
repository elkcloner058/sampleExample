#include<iostream>
using namespace std;
//this line is adde in list2 at 1235PM
//line is added for list1 at12.33PM 
//line addded for list branch on 220415 at 1220pm 
//line added from 22-04-15
//This line has been added for branch four
//This has been changed in branch not in master
//This comment has been added for branch three
//this line is added on 220415 at 1210pm
long int c[1000][1000];

int max(long int a, long int b)
{
	if(a>b)


		return a;
	else
		return b;
}
int lcs_length(long int x[],long int y[],int m , int n)
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

	long int num_seq1[1000],num_seq2[1000];

	int len1,len2,count=1;

	while(2==scanf("%d %d",&len1,&len2))
	{
		if(len1==0&&len2==0)
			break;
        
        int i;

		for(i=0;i<len1;i++)
			cin>>num_seq1[i];
		for(i=0;i<len2;i++)
			cin>>num_seq2[i];

	

		int length = lcs_length(num_seq1,num_seq2,len1,len2);

		//cout<<length<<endl;
		cout<<"Twin Towers #"<<count<<endl;
		cout<<"Number of Tiles : "<<length<<endl;
		cout<<endl;

		count ++;




	}
return 0;
}
