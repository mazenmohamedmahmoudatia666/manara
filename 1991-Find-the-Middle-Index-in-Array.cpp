class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        int sum = accumulate(nums.begin() , nums.end() , 0);
        // 18 / 2 = 9
        int n =nums.size();
          int left_most = 0;
          int i;
          for( i = 0; i < n; i++){
            if(left_most == sum - left_most - nums[i]){
            return i;
             } 
             left_most +=nums[i];
             
    }
         return -1;
    }
};