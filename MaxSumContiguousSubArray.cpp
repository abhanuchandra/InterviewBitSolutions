int Solution::maxSubArray(const vector<int> &A) {
    int maxsofar=A[0],maxtillend=A[0];
    //if(A.size()==1) return A[0];
    for(int i=1;i<A.size();i++){
        maxtillend = max(A[i], maxtillend+A[i]);
        maxsofar = max(maxsofar, maxtillend);
    }
    return maxsofar;
}
