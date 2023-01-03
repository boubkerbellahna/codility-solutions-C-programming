// PermCheck //-----------------------------------------------------------------------

int solution(int A[], int N) 
{
    int i;
    for(i=0; i<N; i++)
    {
        if(A[i]>N) return 0;
        return 1;
    }
}