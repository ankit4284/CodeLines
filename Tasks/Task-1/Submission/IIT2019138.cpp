#include <bits/stdc++.h>
using namespace std;

const int mex=1e8;
int arr[mex]={0};

 void main()
{
    int l,r;
   
    cin>>l>>r;
   
    int cnt=0;
   
    arr[0]=1;
   
    arr[1]=1;
   
    for(int i=2;i*i<mex;i++)
    {  if(arr[i]==0){
        for(int j=i*i;j<mex;j=j+i)       
        arr[j]=1;
       }
    }
   
    for(int i=l;i<r;i++)
    {
        if(arr[i]==0) cnt++;
    }
   
    cout<<cnt<<endl;
}