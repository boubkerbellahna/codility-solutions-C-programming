
// MaxDoubleSliceSum //-----------------------------------------------------------------------
//
int solution(int A[], int N) 
{
    int i,s1=0,s2=0,ns;
    ns = 0;
    for(i=1;i<N-2;i++)
    {
        s1+=A[i];
        if(A[i]<0) {s2=s1-A[i]; i++; s1=A[i];}
        if(s1+s2>ns) ns=s1+s2;
    }
    return ns;
}
// https://app.codility.com/demo/results/trainingC5UJWK-DPX
int solution(int A[], int N) 
{
    int i,j,k,s1=0,s2=0,ns;

 
    ns = 0;

    j=1;
    for(i=0;i<N;i++)
    {
        s1=0;s2=0;
        //printf("i = %d\n",i);

        for(k=1;k+1<j;k++) {
            //printf("%d ",k);
            if(A[k]<0) break;
            s1+=A[k];
        }
        k++;
  
        //printf("\n");
        for(;k<N-1;k++) {
            //printf("%d ",k);
            if(A[k]<0) break;
            s1+=A[k];
        }
        j++;
        if(s1>ns) ns=s1;

        //printf("\ns = %d\n",s1);
        //printf("--------------\n");
    }
        //s1+=A[i];
        //if(A[i]<0) {s2=s1-A[i]; i++; s1=A[i];}
        //if(s1+s2>ns) ns=s1+s2;
    return ns;
}
// https://app.codility.com/demo/results/training47BCRK-HWS
int solution(int A[], int N) 
{
    int i,s,max;

    int *LR = (int*)calloc(N,sizeof(int));
    int *RL = (int*)calloc(N,sizeof(int));

    s=0;
    for(i=1;i<N-1;i++)
    {
        s+=A[i];
        if(s<0) s=0;
        LR[i] = s;
    }
    s=0;
    for(i=N-2;i>=1;i--)
    {
        s+=A[i];
        if(s<0) s=0;
        RL[i] = s;
    }
    max=0;
    for(i=1;i<N-2;i++)
        if(LR[i]+RL[i+2]>max)
            max=LR[i]+RL[i+2];
    
    return max;
}
// https://app.codility.com/demo/results/trainingKUUTMV-TXA
int solution(int A[], int N)
{
    int *LR, *RL;
    int i, max = 0;

    if (N <= 3) return 0;

    LR = (int *)calloc(N,sizeof(int));
    RL = (int *)calloc(N,sizeof(int));


    for (i = 1; i < N-1; i++) {
        if(LR[i-1] + A[i]>=0) LR[i] = LR[i-1] + A[i];
        else LR[i] = 0;
    }
    for (i = N-2; i > 0; i--) {
		if(RL[i+1] + A[i]>=0) RL[i]=RL[i+1] + A[i];
        else RL[i] = 0;
    }

    for (i = 1; i < N-1; i++) {
        if(max<LR[i-1]+RL[i+1])  max=LR[i-1] + RL[i+1];
    }

    return max;
}
