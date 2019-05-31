vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    int carry=1;
    reverse(A.begin(),A.end());
    for(int i=0;i<n;i++){
        int sum=A[i]+carry;
        A[i]=sum%10;
        carry= sum/10;
    }
    
    if(carry){
        A.push_back(1);
    }
    while(A[A.size()-1]==0 && A.size()>0)A.pop_back();
    reverse(A.begin(),A.end());
    return A;
}