
// Triangle //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingHR2U4V-H27
int solution(int A[], int N) 
{
    int i,j,temp;

    for(i=0;i<N;i++)
	{
	for(j=i+1;j<N;j++)
        {if(A[i]>A[j])
            {temp = A[i];A[i] = A[j];A[j] = temp;}}}
    for(i=0;i<N-2;i++)        
        if(A[i]+A[i+1]>A[i+2]) return 1;
    return 0;
}

