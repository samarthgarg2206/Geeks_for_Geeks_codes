

#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        arr[i] = (arr[i]*arr[i]);
    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            v.push_back(arr[i]+arr[j]);
        }
    }
    bool ok=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<n;j++){
            if(v[i]==arr[j]){
                ok=1;
                break;
                
            }
        }
    }
    if(ok)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;

    return 0;
}
