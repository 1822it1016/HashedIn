vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> v;
        if(nums.size()<3)
            return {};
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1;
            int k=nums.size()-1;
            
            while(l<k)
            {
                if((nums[i]+nums[l]+nums[k])<0)
                    l++;
                else if((nums[i]+nums[l]+nums[k])>0)
                    k--;
                else if((nums[i]+nums[l]+nums[k])==0)
                {
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[k]);
                    ans.insert(v);
                    l++;
                    k--;
                    v.clear();
                }
            }

        }
        vector<vector<int>> res;
        for(auto it:ans)
        {
            res.push_back(it);
        }
        return res;
    }
