#include <iostream>
#include <cmath>
using namespace std;
int main(){
double n;
cin>>n;
double a,b,m;
for(m=1;m<n;m++)
{cin>>a>>b;
float c[m]=b/a;
if(float(n)/100-c[m]>0.05)
{cout<<"better"<<'\n';
    break;}
else if (float(n)/100-c==0.05)
{cout<<"same"<<'\n';
break;    
}
else {
cout<<"worse"<<'\n';
break;
}}
}
