//codechef ADD TWO NUMBERS SOLUTION 


#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    int n;
    cin>>n;
    long n1,n2 ;
    long out[n];
    for(int i=0;i<n;i++)
    {
        cin>>n1;
        cin>>n2;
        out[i]=n1+n2;
    }
    for(int j=0;j<n;j++)
    {
        cout<<out[j]<<endl;
    }
}
