// EquiLeader //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingS5ZMKY-B99
int solution(int A[], int N)
{
    int i,j,temp,n=0,d,eq=0;
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

        if(temp>N/2){
            for(j=0;j<N;j++)
                if(A[j]==B[i]){
                    d = A[j];
                    break;
                }
        }
    }
    //printf("%d \n", d);
    for(i=0;i<N;i++) if(d==A[i]) n++;
    
    temp = 0;
    for(i=0;i<N;i++)
    {
        if(A[i]==d) temp++;
        if(i+1<2*temp && N-i-1<2*(n-temp)) eq++;
    }
    return eq;
}
