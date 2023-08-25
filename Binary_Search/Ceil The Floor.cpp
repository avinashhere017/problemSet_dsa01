pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	// sort(arr,arr+n);
	// int left =0;
	// int right=n-1;

	// pair<int,int> p;
	// int a=-1;
	// int b=-1;

	// while(left<=right){
	// 	int mid= (left+right)/2;
	// 	if(arr[mid]==x){
	// 	p=make_pair(arr[mid],arr[mid]);
	// 	return p;
	// 	}

	// 	else if(arr[mid]<x){
	// 	a=arr[mid];
	// 	left=mid+1;
	// 	}
	// 	else{
	// 		b=arr[mid];
	// 	right=mid-1;
	// 	}

	// }
	// p.first=a;
	// p.second=b;

	// return p;

	int ceil=-1;
	int floor=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return {arr[i],arr[i]};
		}
		if(arr[i]<=x){
			ceil=max(ceil,arr[i]);
		}
		else{
			floor=min(arr[i],floor);
		}
	}
	if(floor==INT_MAX) return {ceil,-1};
	return {ceil,floor};

}
