#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int max=arr[0];
    for (int  i = 0; i  < n; i++)
    {
        cin>>arr[i];
        for (int  i = 0; i < n; i++)
        {
            
        
        
        if(arr[i] >max){
            max=arr[i];
        }

        }
        cout<<max;
        
    }
    return 0;
    }
}