/*The student council has a shared document file. Every day, some members of the student council write the sequence TMT (short for Towa Maji Tenshi) in it.

However, one day, the members somehow entered the sequence into the document at the same time, creating a jumbled mess. Therefore, it is Suguru Doujima's task to figure out whether the document has malfunctioned. Specifically, he is given a string of length n whose characters are all either T or M, and he wants to figure out if it is possible to partition it into some number of disjoint subsequences, all of which are equal to TMT. That is, each character of the string should belong to exactly one of the subsequences.

A string a is a subsequence of a string b if a can be obtained from b by deletion of several (possibly, zero) characters.

Input
The first line contains an integer t (1≤t≤5000)  — the number of test cases.

The first line of each test case contains an integer n (3≤n<105), the number of characters in the string entered in the document. It is guaranteed that n is divisible by 3.

The second line of each test case contains a string of length n consisting of only the characters T and M.

It is guaranteed that the sum of n over all test cases does not exceed 105.

Output
For each test case, print a single line containing YES if the described partition exists, and a single line containing NO otherwise.*/
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
   int len;
   cin>>len;
   string s;
   cin>>s;
   int i,c1=0,c2=0;
   for(i=0;i<len;i++){
    if(s[i]=='T')
        c1++;
    else
        c2++;
   }
   int c=0;
   bool flag=true;
   if(c1==(len/3)*2&&c2==len/3)
        {
           for(i=0;i<len;i++){
    if(s[i]=='T')
        c++;
    else
        c--;
    if(c<0){
        flag=false;
        break;
        }
 
   }
int c0=0;
   for(i=len-1;i>=0;i--){
     if(s[i]=='T')
        c0++;
    else
        c0--;
    if(c0<0){
        flag=false;
        break;
        }
   }
        }
 
 
   else
    flag=false;
 
    if(flag==false)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;}
    return 0;
}
