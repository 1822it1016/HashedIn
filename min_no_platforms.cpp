int findPlatform(int arr[], int dep[], int n)
    {
    	int l,r,mini=1;
    	int p=1;
    	l=1;
    	r=0;
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	while(l<n and r<n)
    	{
    	    if(arr[l]<=dep[r])
    	    {
    	        p++;
    	        l++;
    	    }
    	    if(arr[l]>dep[r])
    	    {
    	        r++;
    	        l++;
    	        //p--;
    	    }
    	   // mini=max(mini,p);
    	    if(mini<p)
    	    {
    	        mini=p;
    	    }
    	}
    	return mini;
    }
