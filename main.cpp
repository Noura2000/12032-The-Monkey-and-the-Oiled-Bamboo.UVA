#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int arr[100000]={0},n,k=0,res=0;
        cin>>n;
        for(int j=1;j<=n;j++) cin>>arr[j];

        for(int j=1;j<=n;j++)
        {
            if((arr[j]-arr[j-1])>k) k=arr[j]-arr[j-1];
        }

        res=k;
        for(int j=1;j<=n;j++) if((arr[j]-arr[j-1])==k) k--;
        else if((arr[j]-arr[j-1])>k) {res++; break;}

        cout<<"Case "<<i<<": "<<res<<endl;
    }
    return 0;
}
