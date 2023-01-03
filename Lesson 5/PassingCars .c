// PassingCars //-----------------------------------------------------------------------
//https://app.codility.com/demo/results/trainingTHU6XP-X7F
int solution(int A[], int N) 
{
    int max=1000000000,i,j,counter=0;

    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(A[i]<A[j]) counter++;
        }
    }
    if(counter>max) return -1;
    else
     return counter;;

}
// https://app.codility.com/demo/results/trainingYRSKY2-9VU
int solution(int A[], int N) 
{
    int i,j, counter0=0, counter=0;
    for(i=0; i<N; i++)
    {
        if(A[i]== 0) counter0++;
        if(A[i]== 1) counter+=counter0;
    }
    if(counter>1000000000) return -1;
    else
     return counter;
}
