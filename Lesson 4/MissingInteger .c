// MissingInteger //-----------------------------------------------------------------------
//https://app.codility.com/demo/results/trainingU6GSQQ-B4N/
int solution(int A[], int N) {
    // write your code in C99
    int *B;
    B = (int *)calloc(N, sizeof(int));
    for (int i = 0; i < N ; i ++) {
        if (A[i] > 0 && A[i] <= N) {
            B[A[i] - 1] = 1;
        }
    }

    for (int i = 0 ; i < N; i ++) {
        if (B[i] == 0) {
            return i + 1;
        }
    }
    
    return N + 1;
}

// https://app.codility.com/demo/results/trainingXE4UTU-ECY/
int solution(int A[], int N) 
{
    int temp,i,j;

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
    if(A[N-1]<=0)
        return 1;
    if(N==1)
        return A[N-1]+1;
    for(i=1;i<N;i++)
    {
        if(A[i]-A[i-1]>1)
            return A[i]-1;
    }
    return A[N-1]+1;
}