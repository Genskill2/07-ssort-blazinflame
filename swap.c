void swap_max(int x[], int l, int n);
{
  int i,k,j,a;
  k=x[n];
   j=n;
    for (i=n; i<l; i++)
    {
      if(k<x[i])
       j=i;
      k=x[i];
    }     
      a=x[i];
      x[i]=x[j];
     x[j]=a;
}

void ssort(int x[], int  l); //making the selection sort function//
{
  int i;
    for(i=0; i<l; i++)
      swap_max(x, l, i);
}
