class Solution {
public:
    void fun(int index,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr){
        ans.push_back(ds);
        for(int i=index;i<arr.size();i++){
            if(i>index && arr[i]==arr[i-1])
                continue;
            ds.push_back(arr[i]);
            fun(i+1,ans,ds,arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        fun(0,ans,ds,arr);
        return ans;
    }
};