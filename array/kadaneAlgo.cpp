//Finding the sum of maximum subarray
//Time complexity:O(n) as opposed to O(n^2) in brute force
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int maxSubArray(vector<int>& nums)
        {
            int currSum=0;
            int maxSum=0; 
            for(int val:nums)
            {
                currSum+=val;
                maxSum=max(currSum,maxSum);
                if(currSum<0)
                {
                    currSum=0;
                }
            }
            return maxSum;
        }
};
int main()
{
    Solution s;
    vector<int> nums={3,-4,5,4,-1,7,-8};
    int maxi=s.maxSubArray(nums);
    cout<<maxi;
    return 0;
}