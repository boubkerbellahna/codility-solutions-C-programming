// MinAvgTwoSlice //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingA4QFCV-T6W
int solution(int A[], int N) 
{
    int i,j,m,s=N,sum;
    float avg,min=100000.0;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            sum=0;
            for(m=i;m<=j;m++) 
            {
                sum+=A[m];
            }
            avg = (float)sum/(j-i+1);
            if(avg<min) 
            {
                min = avg; s=i;
            }
        }
    }
    return s;
}
// https://app.codility.com/demo/results/trainingPG9575-XX6
int solution(int A[], int N) 
{
    int i,j,m,s=N,sum;
    float avg1,avg2,min=100000.0;
    for(i=0;i<N-2;i++)
    {
        avg1 = (float)(A[i]+A[i+1]+A[i+2])/3;
        avg2 = (float)(A[i]+A[i+1])/2;
        if(avg1<min || avg2<min)
        {
            s=i;
            if(avg1<avg2) min=avg1;
            else
                min=avg2;
        }
    }
    if((float)(A[N-1]+A[N-2])/2<min) return N-2;
    return s;
}
