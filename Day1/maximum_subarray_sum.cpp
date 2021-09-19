class Sol{
    public:
        int maxSubArray(vector<int>& nums){
            int sum=0;
            int max=INT_MIN;
            for(auto itr : nums){
                sum+=itr;
                max=max(sum,max);
                if(sum<0)
                    sum=0;
            }
            return max;
        }
};