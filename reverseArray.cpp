//Iterative approach
#include<iostream>

using namespace std;

void rev(int* arr,int size)
{
    int temp;
    int start=0;
    int end=size-1;

    
        while(start<end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    rev(arr,size);
    cout<<"reversed array is"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}