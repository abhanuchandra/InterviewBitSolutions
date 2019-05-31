vector<int> Solution::flip(string A) {
    int i=0,l=0,flag=0,sum=0,maxsum=0;
    int n=A.size();
    vector<int> ans(2);
    for(int i=0;i<n;i++){
        int tmp;
        if(A[i]=='0'){tmp=1;flag=1;}
        else tmp=-1;
        if(tmp>sum+tmp){l=i;}
        sum=max(tmp,sum+tmp);
        if(sum>maxsum){
            ans[0]=l+1;
            ans[1]=i+1;
        }
        maxsum=max(maxsum,sum);
    }
    if(flag==0)
    {
        vector<int> ret;
        return ret;
    }
    return ans;
}