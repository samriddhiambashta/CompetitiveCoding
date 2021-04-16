#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int l=0;l<t;l++){
    int n;
   cin>>n;
   int a[n];
   int sum=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    sum=sum+a[i];
   }
   int s;
   if(a[0]==a[1])
    s=a[0];
    else if(a[1]==a[2])
        s=a[1];
    else if(a[0]==a[2])
        s=a[0];

    int res=(sum-s*n)+s;
    int ind;
    for(int i=0;i<n;i++){
        if(a[i]==res){
            ind=i+1;
             break;}}
             arr[l]=ind;
        }
for(int i=0;i<t;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}
