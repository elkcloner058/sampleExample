#include<iostream>
using namespace std;
//just for testing purpose
//another line is added for testing purpose.
int KMP_int(char *string)
{
	int len = strlen(string);
	int i=1,m=-1;

	int table[10000];
	table[0]=-1;

    while(1)
	{
		if(i==len)
		{
			return table[i-1];
			break;
		}

		for(int j=m+1;j<i;j++)
		{
			if(string[i]!=string[j])
			{
				table[i]=table[j];
				break;

			}
			else
			{
				m +=1;
				table[i]=m;
				break;

			}
		}

		
		++i;

	}

}
int main()
{
	char string[100000];
	long testCase;
	cin>>testCase;
	cout<<endl;
	for(int i=1;i<=testCase;i++)
	{

		cin>>string;

		int len = strlen(string);

		string[len]='\0';
			
		int result = KMP_int(string);

		int temp = len - result - 1;

		if(len%temp==0)
		{
			cout<<(temp);
		}
		else
		{
			cout<<len;
		}
		
		if(i<testCase)
			cout<<endl<<endl;

	
	}











return 0;
}