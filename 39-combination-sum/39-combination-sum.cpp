class Solution {
public:
    void fun(int index,vector<int>ds,vector<vector<int>>&ans,vector<int>&arr,int target){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[index]<=target){
            ds.push_back(arr[index]);
            fun(index,ds,ans,arr,target-arr[index]);
                ds.pop_back();
        }
        fun(index+1,ds,ans,arr,target);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        fun(0,ds,ans,arr,target);
        return ans;
    }
};