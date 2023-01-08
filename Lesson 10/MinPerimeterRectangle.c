// MinPerimeterRectangle //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingRSX58N-MPF
int solution(int N)
{
    int i,d=0,min=2147483647;
    if (N <= 0) return 0;
    for(i=1;i<=N;i++)
    {
        if(N%i == 0) {
            d=((N/i)+i)*2;
            //printf("d = %d\n",d);
            if(d<min) min=d;
        }
    }
    return min;
}
// https://app.codility.com/demo/results/trainingWHZHZE-3AY
int solution(int N)
{
    int i,d=0,min=2147483647;
    if (N <= 0) return 0;
    for(i=1;i<sqrt(N);i++)
    {
        if(N%i == 0) {
            d=((N/i)+i)*2;
            //printf("d = %d\n",d);
            if(d<min) min=d;
        }
    }
    if(N == (int)sqrt(N)*(int)sqrt(N)){
        d=((int)sqrt(N))*4;
        if(d<min) min=d;
    }
    return min;
}
