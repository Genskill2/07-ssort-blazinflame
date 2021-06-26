void swap_max(int x[], int l, int n);
{
  int i,k,j;
  k=x[n];
  
    for (i=n; i<l; i++)
    {
      if(k<x[i])
        j=k;
    }      
     
      x[i]=j;
return 0;
}

void ssort(int x[], int  l); //making the selection sort function//
{
  int i;
    for(i=0; i<l; i++)
      swap_max(a,l,i);
}
