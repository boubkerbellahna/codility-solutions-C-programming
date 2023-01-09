// CountNonDivisible //-----------------------------------------------------------------------
//training54GCQK-NV3
struct Results solution(int A[], int N) {
    struct Results result;
    int *B = (int *)calloc(N,sizeof(int));
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j && A[i]%A[j]!=0) B[i]++;
        }
    }
    result.C = B;
    result.L = N;
    return result;
}
