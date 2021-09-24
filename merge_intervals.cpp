vector<vector<int>> merge(vector<vector<int>>& nums) {   
    sort(nums.begin(),nums.end());
        vector<vector<int>> vec;
        vec.push_back(nums[0]);
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
            if(vec[j][1]>=nums[i][0])
        {       vec[j][1] = max(vec[j][1],nums[i][1]);
        }
        else{
                    j++;
            vec.push_back(nums[i]);
        }     
        }
        
        return vec;
    }
