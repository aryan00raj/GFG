Q.The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.
 Sol:-
 long long  numberOfPaths(int m, int n)
{
  if(m==1||n==1) return 1;
  return numberOfPaths(m-1, n) + numberOfPaths(m, n-1);// Code Here
}