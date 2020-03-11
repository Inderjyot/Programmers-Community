#include<bits/stdc++.h>
using namespace std;
int OneOddOccuring(int a[],int n)
{
 int res = 0;
 for(int i=0;i<n;i++)
 {
     res = (res^a[i]);
 }
 return res;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<OneOddOccuring(arr,n); 
}
