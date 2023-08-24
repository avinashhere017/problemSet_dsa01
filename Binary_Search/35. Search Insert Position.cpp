    int searchInsert(vector<int>& nums, int target) {

	int left = 0;
	int right =nums.size()-1;


	while(left<=right){
		int mid=(left+right)/2;

        if(nums[mid]==target) {
					return mid;
					}
	      else if(nums[mid]<target) {
					
						left = mid + 1;}
        else{ right=mid-1; }
        }
	return left;


	// m2
	// int n=nums.size();
  //       int l=0,r=n-1;

  //       while(l<=r){
  //           int m=l+(r-l)/2;
            
  //           if(nums[m]==target) return m;
  //           if(nums[m]<target) l= m+1;
  //           else r=m-1;
  //       }
  //       return l;
}
