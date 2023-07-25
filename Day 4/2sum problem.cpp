class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
       vector<pair<int,int>>ans(n);
        int i = 0;
        int j =n-1;
        for(int i=0;i<n;i++){
            ans[i]=make_pair(nums[i],i);
        }        
        sort(ans.begin(),ans.end());
        while(i<j)
        {
       
            if(ans[i].first+ans[j].first==target)
            {
              return {ans[i].second,ans[j].second};
            }
            else if(ans[i].first+ans[j].first>target)
            {
               j--;      
            }
            else{
               i++;
            }
        }
        return {};
    }
};
