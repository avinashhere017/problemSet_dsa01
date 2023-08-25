vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
       vector<int>v;
        int temp=-1;
        int temp1=-1;
        int flag=-1;

        while(left<=right){
            int mid=left+(right-left)/2;
         if(nums[mid]==target){
             flag=1;
             temp=mid;
             temp1=mid;
             break;
         }
         else if(nums[mid]<target){
             left=mid+1;
         }else{
             right=mid-1;
         }

        }

        if(flag==-1){
            v.push_back(-1);
             v.push_back(-1);
           return v;
        }
        while(temp>=0 &&nums[temp]==target ){
            temp--;
        }
        temp++;
        while(temp1<nums.size() && nums[temp1]==target ){
            temp1++;

        }
        temp1--;
        v.push_back(temp);
        v.push_back(temp1);


        
        return v;
    }
