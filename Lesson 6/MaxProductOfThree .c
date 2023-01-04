// MaxProductOfThree //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/training5G9V22-7RE
int solution(int A[], int N) 
{
    int i,j,temp;
    int max1,max2,max3;
    for(i=0;i<N;i++)
	{
	for(j=i+1;j<N;j++)
        {if(A[i]>A[j])
            {temp = A[i];A[i] = A[j];A[j] = temp;}}}
    max1=A[N-1];max2=A[N-2];max3=A[N-3];

    return max1*max2*max3;
}
// https://app.codility.com/demo/results/trainingZASKF8-JHV
int solution(int A[], int N) 
{
    int i,j,temp;
    int p1,p2;
    for(i=0;i<N;i++)
	{
	for(j=i+1;j<N;j++)
        {if(A[i]>A[j])
            {temp = A[i];A[i] = A[j];A[j] = temp;}}}

    p1 = A[N-1]*A[N-2]*A[N-3];
    p2 = A[N-1]*A[0]*A[1];

    return p1>p2 ? p1:p2;
}
