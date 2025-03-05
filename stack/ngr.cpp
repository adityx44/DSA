//Next Greatest element using stack 
//Time complexity O(n) as opposed to O(n^2) using brute force
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> ngr(int* arr,int size)
{
    vector<int> v;
    stack<int> s;
    for(int i=size-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size() >0 && s.top()<arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else 
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
    int arr[]={1,3,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> res=ngr(arr,size);
    for(auto i:res)
    {
        cout<<i<<" ";

    }
    return 0;
}