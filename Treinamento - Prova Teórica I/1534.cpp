#include <stdio.h>

int main()
{
    int N,i,j;
    while(scanf("%d",&N) != EOF)
    {
        int matriz[N][N];
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                matriz[i][j]=3;
                matriz[i][i]=1;
                matriz[i][N-i-1]=2;
                printf("%d",matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
