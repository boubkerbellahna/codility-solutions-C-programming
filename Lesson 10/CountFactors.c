// CountFactors //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/trainingD4BUYY-RY9
int solution(int N)
{
    if(N==1) return 1;
    int i,d=0;
    if (N <= 0) return 0;
    for(i=1;i<=N;i++)
    {
        if(N%i == 0) {
            d++; 
        }
    }
    return d;
}
// https://app.codility.com/demo/results/training7WHQDM-77T
int solution(int N)
{
    if(N==1) return 1;
    int i,d=0;
    if (N <= 0) return 0;
    for(i=1;i<sqrt(N);i++)
        if(N%i == 0) 
            d+=2;
    if(N == (int)sqrt(N)*(int)sqrt(N)) d++;
    
    return d;
}
