//printing the indices of the elements whose sum is the target

#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
        vector<int> twoSum(int* arr,int target,int n){
            vector<int> res;
            int k=0;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(target==arr[i]+arr[j])
                    {
                        res.push_back(i); // Store the first index
                        res.push_back(j); // Store the second index
                        return res;
                    }
                }
            }
            return res;
        }
};
int main()
{
    int arr[]={2,7,14,11,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    solution a;
    vector<int> result=a.twoSum(arr,target,n);
    cout<<"solution is [ "<<result[0]<<","<<result[1]<<"]";
    return 0;
}
