vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ans;
    long long int sum=0,square=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=(long long)(i+1);
        sum-=(long long)(A[i]);
        square+=(long long)(i+1)*(long long)(i+1);
        square-=(long long)(A[i])*(long long)(A[i]);
    }
    square/=sum;
    int a=(int) (square-sum)/2;
    int b=(int) (sum+square)/2;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
