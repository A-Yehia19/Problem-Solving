#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    int n,t1,t2,rate;
    double c1,c2;
    vector< pair<double,int> >in;
    cin>>n>>t1>>t2>>rate;
    for(int i=1;i<=n;i++)
    {
		int a,b;
        cin>>a>>b;

		// calculate the max length possible then push it to the vector
        c1=(a*t1)-(double(a*t1*rate)/100)+(b*t2);
        c2=(b*t1)-(double(b*t1*rate)/100)+(a*t2);

		// -1 to make it sorts decendingly
        in.push_back(make_pair(-1*max(c1,c2),i));
    }

    sort(in.begin(),in.end());
    for(int i=0;i<n;i++)
        cout<<in[i].second<<" "<<fixed<<setprecision(2)<<-1*in[i].first<<endl;
    return 0;
}