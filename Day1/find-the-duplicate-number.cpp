//https://leetcode.com/problems/find-the-duplicate-number/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //we will be using hare n tortoise method
            int findDuplicate(vector<int>& nums){
                int slow = nums[0];
                int fast = nums[0];
                do {
                    slow = nums[slow];
                    fast = nums[nums[fast]];//for double speed
                }
                while(slow!=fast);
                fast = nums[0];
                while(slow!=fast){
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return slow;//u can return fast also
            }
};
