#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
#include <cmath>
int main(){
int n;
cin>>n;
for(int i=1;i<=n*n;i++){
    if(i%n==1&&i!=1)
        cout<<'\n';
    else{
        if(i<10)
            cout<<"0"<<i;
        else
            cout<<i;    }}
cout<<'\n';
int m=2*n;
for(int j=1;j<=n*(1+n)/2;j++){
if(m>0){
    m=m-2;
    while(m){
        cout<<" ";
        while((2*n-m)/2){
            j++;
            cout<<j;
            if(j<10)
            cout<<"0"<<j;
        else
            cout<<j;    
        }
    }
}
}
    
        

}
