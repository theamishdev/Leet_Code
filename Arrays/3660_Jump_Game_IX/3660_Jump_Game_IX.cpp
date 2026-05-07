class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>left_max(n);             //max_element on left side from index i i.e 0 to i
        vector<int>right_min(n);            //min_element on right side from index i i.e i+1 to n
        left_max[0]=nums[0];
        right_min[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            left_max[i]= max(nums[i],left_max[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            right_min[i]= min(nums[i],right_min[i+1]);
        }
        vector<int>ans(n);
        ans[n-1]=left_max[n-1];
        for(int i=n-2;i>=0;i--){
            if(left_max[i]<=right_min[i+1]){    //can't go to right at all
                ans[i]=left_max[i];
            }else{
                ans[i]=ans[i+1];
            }
        }
        return ans;
    }
};