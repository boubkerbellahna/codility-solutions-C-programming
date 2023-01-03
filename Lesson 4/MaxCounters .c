// MaxCounters //-----------------------------------------------------------------------
//C : https://app.codility.com/demo/results/trainingHRJHUA-9QY/
struct Results solution(int N, int A[], int M) 
{
    struct Results result;
    int *Ans;
    Ans = (int *)calloc(N, sizeof(int));
    int max=0,i,j;

    for(i=0; i<M; i++)
    {
        if(A[i]<=N) {
            Ans[A[i]-1]++;
            if(max<Ans[A[i]-1]) max=Ans[A[i]-1];
        }
        else{
            for(j=0; j<N; j++) Ans[j]=max;
        }
    }
    result.C = Ans;
    result.L = N;
    return result;
}