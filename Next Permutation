class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return;
        int lastindex = -1;
        int i=1;
        while(i<n){
            if(nums[i]>nums[i-1])
                lastindex = i;
            i++;
        }
        if(lastindex == -1){
        for(i=0;i<n/2;i++)
        
            swap(nums[i],nums[n-i-1]);
            return;
        
        }
        int m = nums[lastindex];
        int index=lastindex;
        for(i=lastindex;i<n;i++)
        {
            if(nums[i]>nums[lastindex-1] && nums[i]<nums[index])
            {
                index=i;
            }
        }
        swap(nums[lastindex-1], nums[index]);
        sort(nums.begin()+lastindex,nums.end());
    }
};
