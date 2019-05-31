int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    if(A.size()==0 || A.size()==1)return ans;
    for(int i=1;i<A.size();i++){
        ans+=max(abs(A[i-1]-A[i]),abs(B[i-1]-B[i]));
    }
    return ans;
}
