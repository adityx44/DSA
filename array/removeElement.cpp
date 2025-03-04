/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
 The order of the elements may be changed.
Then return the number of elements in nums which are not equal to val */
//Ex. Input: nums = [3,2,2,3], val = 3
//Output: 2, nums = [2,2,_,_]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int removeElement(int* arr,int size,int target){
            int i=0;
            for(int j=0;j<size;j++)
            {
                if(arr[j]!=target)
                {
                    arr[i]=arr[j];
                    i++;
                }
            }
            return i;
        }
};
int main()
{
    int arr[]={1,24,3,5,32,6,1,5,8,6,7,7,6};
    int target=7;
    int size=sizeof(arr)/sizeof(arr[0]);
    solution a;
    int newSize=a.removeElement(arr,size,target);
    cout<<"New array is"<<endl;
    for(int i=0;i<newSize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"size is - "<<newSize;
    return 0;
}
