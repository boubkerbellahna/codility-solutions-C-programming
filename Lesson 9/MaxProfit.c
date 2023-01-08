// MaxProfit //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingUQJGQS-YA5
#include <limits.h>

int solution(int A[], int N) 
{
    if(N<2) return 0;
    int i,j,max=INT_MIN;
    
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
            if(A[j]-A[i]>max)
                max = A[j]-A[i];
    }
    return max;
}
// https://app.codility.com/demo/results/training9G4PNV-TTZ
#include <limits.h>

int solution(int A[], int N) 
{
    if(N<2) return 0;
    int i,min,max,s;

    min = A[0];
    max = 0;
    s=0;
    
    for(i=1;i<N;i++)
    {
        if(A[i]<min) { min=A[i]; s=0; }
        else s+=(A[i]-A[i-1]);

        if(s>max) max=s;
    }
    return max;
}

