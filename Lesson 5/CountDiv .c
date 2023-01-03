// CountDiv //-----------------------------------------------------------------------
// https://app.codility.com/demo/results/training927QYV-FDV
int solution(int A, int B, int K) 
{
    int i,counter=0;

    for(i=A;i<=B;i++)
    {
        if(i%K==0) counter++;
    }
    return counter;
}
// https://app.codility.com/demo/results/trainingTCCHFC-7JG
int solution(int A, int B, int K) 
{
    int counter = (B/K) - (A/K);
    if(A%K==0) counter++;
    return counter;
}
