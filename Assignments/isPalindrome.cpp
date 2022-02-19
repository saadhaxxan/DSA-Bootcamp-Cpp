	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n= S.size();
    int mid=(n-1)/2;
 
    if(S.size() & 1){
        for(int i=0;i<mid;i++){
            if(S[i]!=S[(n-1)-i]){
                return 0;
            }
        }
        return 1;
    }
     else{
        for(int i=0,j=n-1;i<j;i++,j--){
            if(S[i]!=S[j]){
                return 0;
            }
        }
        return 1;
    }
	}
