class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total,lSum=0,rSum,i;
              
        for(auto i : nums){
            total += i;
        }
        
        for(i=0; i<nums.size(); i++)
        {
            rSum = total - nums[i] - lSum;
            
            if(lSum == rSum)
            {
                return i;
            }
            
            lSum += nums[i];
        }        
        return -1;
    }
};



    
