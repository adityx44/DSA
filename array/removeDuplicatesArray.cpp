#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(int arr[],int size)
{
    if (size==0)
    {
        return 0;
    }
    int i=0;
    for(int j=1;j<size;j++)
    {
        if(arr[j]!=arr[i])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main()
{
    int arr[]={1,1,1,2,3,3,4,55,55};
    int size=sizeof(arr)/sizeof(arr[0]);
        int newSize = removeDuplicates(arr, size);

    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
