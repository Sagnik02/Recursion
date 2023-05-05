# include <bits/stdc++.h> 
using namespace std ;

//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.Given an array nums of distinct integers, return all the possible permutations. 
//You can return the answer in any order.

//Input: nums = [1,2,3]
//Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

void recurPermute(vector<vector<int>> &ans,vector<int>&nums,int freq[],vector<int>&ds){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(freq[i]==0){
            ds.push_back(nums[i]);
            freq[i]=1;
            recurPermute(ans,nums,freq,ds);
            ds.pop_back();
            freq[i]=0;
        }
    }
}
vector<vector<int>> permute(vector<int>&nums) {
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        vector<int> ds;
        vector<vector<int>> ans;
        recurPermute(ans,nums,freq,ds);
        return ans;
    }

int main(){
    vector<int> nums;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        
        cout<<" Enter the "<<(i+1)<<"th element : "<<endl;
        cin>>x;
        nums.push_back(x);

    }
    vector<vector<int>> ans=permute(nums);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}