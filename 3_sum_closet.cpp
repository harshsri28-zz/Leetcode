class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX;
        int z= nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<z && diff!=0; i++){
            int l = i+1;
            int h = z-1;
            while(l<h){
                int sum = nums[i]+nums[l]+nums[h];
                if(abs(target-sum) < abs(diff)){
                    diff=target - sum;
                }
                if(sum < target){
                    l++;
                }else{
                    h--;
                }
            }
        }
      return target - diff;  
    }
};
