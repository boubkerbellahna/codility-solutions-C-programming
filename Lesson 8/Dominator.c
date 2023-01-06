// Dominator //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingZ6NAMJ-6QJ
int solution(int A[], int N) 
{
    int i,j,temp;
    int *B = (int *)calloc(N,sizeof(int));

    for(i=0; i<N; i++)
        B[i]=A[i];

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++)
            {if(B[i]>B[j])
                {temp = B[i];B[i] = B[j];B[j] = temp;}}}
    temp = 1;
    for(i=1;i<N;i++)
    {
        if(B[i]!=B[i-1]) temp=1;
        else temp++;

        if(temp>N/2)
        {
            for(j=0;j<N;j++)
                if(A[j]==B[i])    
                    return j;
        }
    }
    return -1;
}

