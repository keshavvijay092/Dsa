#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void NQueen(int mat[][3],int i,int n)
{
    // mat[][] = 1 queen present 
   // mat[][] = 0  queen absent 

    //solution 
    // base cases 
    if(i == n)
    {
        // outside solution 
        // print matrix
        return ; 
    } 

    // choices 
    
    // choices at ith row 
    mat[i][0] = 1; 
    // we just placed the queen at the starting i 
    NQueen(mat,i+1,n);
    mat[i][0] = 0;

    mat[i][1] = 1;
    Nqueen(mat,i+1,n);
        


}
int main()
{
    
    return 0;
}