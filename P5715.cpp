#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a,b,c;
int d=a+b+c;
int maxn=max(a,max(b,c));
int minn=min(a,min(b,c));
cout<<minn<<" "<<d-minn-maxn<<" "<<maxn;

}
