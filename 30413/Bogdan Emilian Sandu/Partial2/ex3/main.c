#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 3

int nrPaths = 0;
void nrOfPaths(int m[N][M],int x, int y){
if(x == 0 && y == M - 1){
    nrPaths++;
    return;
}
if(x < 0 || y > M -1) //if move is bad return
return;
else{
    nrOfPaths(m,x-1,y); // go north
nrOfPaths(m,x,y+1); // go east
nrOfPaths(m,x-1,y+1); // go north-east
}
}
//found the dynamic programming sol but my pc crashed

int main()
{
    int m[N][M] = {0};
    nrOfPaths(m,N-1,0);
    printf("%d",nrPaths);
    return 0;
}
