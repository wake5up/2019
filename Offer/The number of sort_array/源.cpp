//统计一个数字在排序数组中出现的次数。
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()<=0)
            return 0;
        int l=0;
        int r=nums.size()-1;
        int first,last;
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid;
        }
        if(nums[l]!=target)
            return 0;
        first=l;
        r=nums.size();
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(nums[mid]<=target)
                l=mid+1;
            else
                r=mid;
        }
        last=l;
        return last-first;
    }
};