#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int x1=a*d-c*b;
    int x2=c*b-a*d;
    
    if (x1 > 0)
        cout<<x1/__gcd(x1,a*d)<<"/"<<a*d/__gcd(x1,a*d);
    else
        cout<<x2/__gcd(x2,c*b)<<"/"<<c*b/__gcd(x2,c*b);

}
/*
 * a : b
 * c : d
 * c*b/d : d*b/d -> try fitting on Y (make second part = second part)
 * 
 * check on the first part 
 * if screen size (a) - new movie size (c*b/d) > 0
 * 
 * then valid
 * if not then the answer is by fitting on X
 */