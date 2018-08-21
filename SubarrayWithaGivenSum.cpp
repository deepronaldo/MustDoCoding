#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int x;
    int n;
    cout<<"size "<<endl;
    cin>>n;
    int k=n;
    while(k--)
    {
        cin>>x;
        v.push_back(x);
    }
    int sum;
    cout<<"enter sum "<<endl;
    cin>>sum;
    int i=0,j=0;
    int curr_sum=0;
    while(j<n)
    {
        while(curr_sum+v[i]<sum && i<n-1)
        {
            curr_sum=curr_sum+v[i];
            i++;
            cout<<"1st while loop curr_sum is "<<curr_sum<<endl;
        }
        curr_sum+=v[i];
        if(curr_sum==sum)
            {
                cout<<"j and i are "<<j<<" "<<i<<endl; return 0;}
        cout<<"idhar hoon"<<endl;
        i++;
        while(curr_sum-v[j]>sum);
        {
            curr_sum-=v[j];
            j++;
            cout<<"2nd while loop curr_sum is "<<curr_sum<<endl;
        }
        cout<<"idhar bhi hoon"<<endl;
        curr_sum-=v[j];
        if(curr_sum==sum)
            {cout<<"j and i are "<<j<<" "<<i<<endl; return 0;}
        j++;
    }
}
