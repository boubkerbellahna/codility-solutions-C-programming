

// NumberOfDiscIntersections //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingBHJ53P-QE3
int solution(int A[], int N) 
{
    int i,j,c=0;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(j-A[j]<=i+A[i]) c++;
        }
    }
	if(c>10000000)
        return -1;
    return c;
}
