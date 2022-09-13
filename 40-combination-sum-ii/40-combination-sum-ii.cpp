class Solution {
public:
    void fun(int index,int target, vector<vector<int>>&ans, vector<int>ds,vector<int>& arr){
        if(target==0)
        {
            ans.push_back(ds);
            return ;
        }
        for(int i=index;i<arr.size();i++){
            if( i>index && arr[i]==arr[i-1] )
                continue;
            if(arr[i]>target)
                break;
            ds.push_back(arr[i]);
            fun(i+1,target-arr[i],ans,ds,arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int>ds;
        sort(arr.begin(),arr.end());
         vector<vector<int>>ans;
        fun(0,target,ans,ds,arr);
            return ans;
    }
};