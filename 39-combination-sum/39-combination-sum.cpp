class Solution {
public:
    void fun(int indx,vector<int>&ds,vector<vector<int>>&ans,vector<int>candidates,int target){
        if(indx==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //taking part
        if(candidates[indx]<=target){
        ds.push_back(candidates[indx]);
            //index value is not incremented because we can have same element unlimited times
        fun(indx,ds,ans,candidates,target-candidates[indx]);
            ds.pop_back();
        }
        //not taking part
        fun(indx+1,ds,ans,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
       fun(0,ds,ans,candidates,target);
         return ans;
    }
};