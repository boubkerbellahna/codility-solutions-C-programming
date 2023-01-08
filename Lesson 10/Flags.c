
// Flags //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingVZPZKS-N2H
int solution(int A[], int N) 
{
    int i,j=-2,f=0;
    if(N<3) return 0;
    for(i=1; i<N-1; i++)
    {
        if(A[i]>A[i-1] && A[i]>A[i+1] && (i==1 || (i-j>2))) 
        {
            //printf("%d ",i);
            f++;
            j=i;
        }
    }
    return f;
}


//  //-----------------------------------------------------------------------
