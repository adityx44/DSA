//Median of two sorted arrays


#include<iostream>
#include<vector>
using namespace std;

vector<int> uni(int* arr1,int* arr2,int m,int n)
{
    int i=0;
    int j=0;
    int k=0;
    vector<int> arr3;
    while(i<m &&j<n)
    {
        if(arr1[i]<arr2[j])
        {
              arr3.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
              arr3.push_back(arr2[j]);  
            j++;
        }
        else
        {
              arr3.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<m)
    {
        arr3.push_back(arr1[i++]);
    }
    while(j<n)
    {
         arr3.push_back(arr2[j++]);
    }
    return arr3;
}

int median(vector<int> arr)
{
    int a=arr.size();
    if(a%2==0)
    { 
        int r=a/2;
        int med=(arr[r]+arr[r+1])/2;
        return med;
    }
    else
    {   
        int r=(a+1)/2;
        int med=arr[r];
        return med;
    }
}
int main()
{
    int arr1[]={1,3,5,9};
    int arr2[]={2,3,4,7,8,10};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> res=uni(arr1,arr2,m,n);
    cout<<"Union is"<<endl;
    for(int num:res)
    {
        cout<<num<<"\t";
    }
    int md=median(res);
    cout<<"\nMedian is"<<md;
    
    return 0;
}