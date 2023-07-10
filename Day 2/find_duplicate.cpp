class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int element = nums[i];
            int x = element - 1;
            if (nums[x] != element)
            {
                swap(nums[x], nums[i]);
                i--;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 != nums[i])
                return nums[i];
        }
        return -1;
    }
};