// Fish //-----------------------------------------------------------------------
//  https://app.codility.com/demo/results/training7FTR4A-BBM
int solution(int A[], int B[], int N) 
{
    int i,t,c=0;
    char *stack = (int *)calloc(N,sizeof(int));


    for(t=0,i=0;i<N;i++)
    {
        if(B[i]==1){
            stack[t++]=A[i];
        }
        else{
            while (t>0) 
            {
                if(A[i]<stack[t-1])
                {
                    c++;break;
                }else {
                c++; t--;
                }
            }
        }
    }
    return (N-c);
}
// https://app.codility.com/demo/results/training7J7HW7-KVQ
int solution(int A[], int B[], int N) 
{
    int i,t,c=0;
    int *stack = (int *)calloc(N,sizeof(int));

    for(t=0,i=0;i<N;i++)
    {
        if(B[i]==1){
            stack[t++]=A[i];
        }
        else{
            while (t>0 && stack[t-1] < A[i]) t--;

			if (t == 0) c++;
        }
    }
    return (t+c);
}
