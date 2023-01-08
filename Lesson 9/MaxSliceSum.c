// MaxSliceSum //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingZSXB2R-N9T
int solution(int A[], int N) 
{
    int i,j,s,ns;

    s = A[0]+A[1];
    ns = s;

    
    for(i=2;i<N;i++)
    {
        s+=A[i];
        if(s<=0) s=A[i];
        if(s>ns) ns=s;
    }

    return ns;
}
// https://app.codility.com/demo/results/training9MRRHY-E9F
int solution(int A[], int N) 
{
    int i,s,ns;

 
    ns = A[0];

    for(i=0;i<N;i++)
    {
        s+=A[i];
        if(A[i]>s) s=A[i];
        if(s>ns) ns=s;
    }

    return ns;
}
