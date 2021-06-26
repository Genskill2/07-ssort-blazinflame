void swap_max(int x[], int l, int n);
{
  int i,k,j;
  k=x[n];
   j=k;
    for (i=n; i<l; i++)
    {
      if(k<x[i])
       k=x[i];
    }      
      x[i]=j;
     x[n]=k;
}

void ssort(int x[], int  l); //making the selection sort function//
{
  int i;
    for(i=0; i<l; i++)
      swap_max(a,l,i);
}
