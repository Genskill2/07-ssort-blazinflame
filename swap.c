void swap_max(int x[], int l, int n)
{
	int i, j;
	int k=x[n]; 
	int a=n; 
	for(i=n; i<l; i++)
		if(k<x[i])
		{
			a = i;
			k = x[i];
		}
	j = x[n];
	x[n] = x[a];
	x[a] = j;
}

void ssort(int x[], int l)
{
	int i;
	for(i=0;i<l;i++)
		swap_max(x, l, i);
}
