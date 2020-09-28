#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack <int> s;
   vector<int> v;
int arr[]={5,15,10,8,6,12,9,18};
   v.push_back(-1);
   s.push(arr[7]);
   for(int i=6;i>=0;i--)
   {
       if(arr[i]<=s.top())
       {

           v.push_back(s.top());
           s.push(arr[i]);
       }
       else if(arr[i]>s.top())
       {
           while(s.empty()!=true && arr[i]>s.top())
           {
               s.pop();
           }
           if(s.empty()==true)
          v.push_back(-1);
           else
           v.push_back(s.top());
           s.push(arr[i]);
           
       }

   } 
   for(auto itr=v.end()-1;itr!=v.begin()-1;itr--)
   {
       cout<<*itr<<" ";
   }

}