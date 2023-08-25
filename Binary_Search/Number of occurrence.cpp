int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int left=0;
        int right=n-1;
   
        int temp=-1;
        int temp1=-1;
        int flag=-1;

        while(left<=right){
            int mid=left+(right-left)/2;
         if(arr[mid]==x){
             flag=1;
             temp=mid;
             temp1=mid;
             break;
         }
         else if(arr[mid]<x){
             left=mid+1;
         }else{
             right=mid-1;
         }

        }

        if(flag==-1){
         
           return 0;
        }
        while(temp>=0 &&arr[temp]==x ){
            temp--;
        }
        temp++;
        while(temp1<n && arr[temp1]==x ){
            temp1++;

        }
        temp1--;
		int ans = temp1-temp+1;


        
        return ans;

}
