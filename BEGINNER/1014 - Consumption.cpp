#include<stdio.h>
int main(){
    
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.3lf km/l\n", a / b);
    
    return 0;
    
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    float x,y;
    cin>>x>>y;
    cout<<fixed<<setprecision(3)<<x/y<<" km/l"<<endl;
    
    return 0;
}
