#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
int n;
cin>>n;
int num[30];
for(int i=1;i<=n;i++)
{
	int sum=1;
    for(int j=1;j<=i;j++)
        {sum=sum*j;
   num[i]=sum;}
}
int summary=0;
for(int m=1;m<=n;m++)
{
summary=summary+num[m];}
cout<<summary;
}
