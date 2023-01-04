// Distinct //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingF3FY9S-XAZ
int solution(int A[], int N)
{
    int i,j,f;

    for(i=0;i<N;i++)
    {
        f=0;
        for(j=0;j<N;j++)
            if(A[i]==A[j]) f++;
        if(f==1) return A[i];
    }
}
// https://app.codility.com/demo/results/trainingWV3DRC-JAX
int solution(int A[], int N)
{
    int i;
    int *Ans;
    Ans = (int *)calloc(N, sizeof(int));

    for(i=0;i<N;i++) Ans[A[i]-1]++;

    for(i=0;i<N;i++) 
        if(Ans[i]==1) return i+1;
}
// https://app.codility.com/demo/results/trainingMTJ664-622
int solution(int A[], int N) 
{
    int temp,i,j;
    if(N==0) return 0;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(A[i]>A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    j=1;
    for(i=1;i<N;i++)
        if(A[i]!=A[i-1])
            j++;
    return j;
}
