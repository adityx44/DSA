#include<iostream>
#include<algorithm>
using namespace std;

int maxSumSubarray(int* arr,int size,int windowSize)
{
    int k=windowSize;
    int i=0;
    int j=0;
    int sum=0;
    int maxValue=0;
    while(j<size)
    {
        sum=sum+arr[j];
        if((j-i+1)<k)
        {
            j++;
        }
        else if((j-i+1)==k)
        {
            maxValue=max(maxValue,sum);
            sum=sum-arr[i];
            i++;
            j++;

        }
    }
    return maxValue;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int winSize=3;
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxi=maxSumSubarray(arr,size,winSize);
    cout<<"Maximum sum is "<<maxi;
    return 0;
}
