	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int mr=0;
	 int c1=0;
	    int maxc=0;
	    for(int i=0;i<n;i++)
	    {   int j=m-1;
	        int c=0;
	 
	       while (arr[i][j]==1)
	        {   c1++;
	            j--;
	            c++;
	        }
	        if(c>maxc)
	        {
	            maxc=c;
	            mr=i;
	        }
	    }
	    if(c1==0)
	    return -1;
	    return mr;
	}
