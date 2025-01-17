#include<stdio.h>
#define INF 99999
#define n 4
void floydwarshall(int graph[n][n]){
    int dist[n][n];
    int i,j,k;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        dist[i][j]=graph[i][j];
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(dist[i][k]+dist[k][j]<dist[i][j])
                    dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(dist[i][j]==INF)
                printf("%7s", "INF");
            else
            printf("%7d",dist[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int graph[n][n]={
        {7, 5, INF, INF},
        {7, INF,INF,2},
        {INF,3,INF,INF},
        {4,INF,1,INF}

        };
        floydwarshall(graph);
        return 0;

}

