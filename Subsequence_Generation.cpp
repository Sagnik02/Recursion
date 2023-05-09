#include <bits/stdc++.h>
using namespace std;
void printsub(int ind , vector<int>&ds,int arr[],int n)
{
    if(ind==n)
    {
        for(auto it : ds)
        {
            cout<<it<<" ";
        }
        if(ds.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    printsub(ind+1,ds,arr,n);
    ds.pop_back();
    //not pick or not take the particular element into the subsequence
    printsub(ind+1,ds,arr,n);
}
int main(){
    int arr[3]={3,1,2};
    int n=3;
    vector<int> ds;
    printsub(0,ds,arr,n);
}