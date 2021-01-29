class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        const int size = nums.size();
        if(size<3)
            return {};
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<size-2;++i){
            if(i==0 || nums[i]!=nums[i-1]){
                if(nums[i]>0)
                    break;
                int target = -nums[i];
                int j = i+1;
                int k = size-1;
                while(j<k){
                    int sum = nums[j] + nums[k];
                    if(sum==target){
                        result.push_back( {nums[i],nums[j],nums[k]} );
                        while(j<k && nums[j]==nums[j+1]) j++;
                        while(j<k && nums[k]==nums[k-1]) k--;
                        j++;
                        k--;
                     }
                    else if(sum>target)
                        k--;
                    else
                        j++;
            }
        }
    }
        return result;
    }
   
};
