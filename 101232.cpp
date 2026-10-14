#include <iostream>
using namespace std;
int main(){
int y,m,d;
cin>>y>>m>>d;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
if((y%4==0&&y%100!=0)||y%400==0)
    month[2]=29;
else
    month[2]=28;
    if(m<1||m>12||d>month[m]||d<1)
{cout<<"日期有误";
return 0;}
else{    
int sum=0;    
for(int i=1;i<m,i++)
        {sum+=month[i];}
    sum=sum+d;
    cout<<"这是"<<y<<"年的第"<<sum<<"天";
        }
}
