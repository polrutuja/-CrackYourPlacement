class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long mini = LLONG_MAX;
    if(m>n) return -1;
    sort(a.begin(),a.end());
    for(long long i=0;i+m-1<n;i++){
        long long diff = a[i+m-1] - a[i];
        mini = min(diff, mini);
    }
        return mini;
    }   
};
