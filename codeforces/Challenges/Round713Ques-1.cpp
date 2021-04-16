/* You are given an array a consisting of n (n≥3) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array [4,11,4,4] all numbers except one are equal to 4).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

Input
The first line contains a single integer t (1≤t≤100). Then t test cases follow.

The first line of each test case contains a single integer n (3≤n≤100) — the length of the array a.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤100).

It is guaranteed that all the numbers except one in the a array are the same.

Output
For each test case, output a single integer — the index of the element that is not equal to others. */
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
