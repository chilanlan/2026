#include <iostream>
#include <cmath>
#include <iomanip>
float a,b,c;
cin>>a>>b>>c;
double x,x1,x2;

if(fabs(a)<=1e-6){
    if(fabs(b)<=1e-6)
        cout<<"Not an equation";
    else
        cout<<"x="<<fixed<<setprecision<<-1*c/b;
}    
else{
	double d=b*b-4*a*c;
    if(d>1e-6){
	
        x1=(sqrt(d)-b)/2/a;
        x2=(-b-sqrt(d))/2/a;
        cout<<"x1="<<fixed<<setprecision(2)<<x1<<" "<<"x2="<<fixed<<setprecision(2)<<x2;}
    else if(d=0)
        {
		x=-b/2/a;
        cout<<"x1=x2="<<fixed<<setprecision(2)<<x;}
    else{
	
    double real=-b/2/a;
    double imag=sqrt(-d)/2/a;-
    cout<<"x1="<<fixed<<setprecision(2)<<real<<"+"<<fixed<<setprecision(2)<<iamg<<" "<<"x2="<<fixed<<setprecision(2)<<real<<"-"<<fixed<<setprecision(2)<<imag£»
    
}
    
}
