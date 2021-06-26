void swap_max(int arr[], int l, int n)
{
	int i, lar=arr[n], p=n, t;
	for(i=n;i<l;i++)
		if(lar<arr[i])
		{
			p=i;
			lar = arr[i];
		}
	t = arr[n];
	arr[n] = arr[p];
	arr[p] = t;
}

void ssort(int arr[], int l)
{
	int i;
	for(i=0;i<l;i++)
		swap_max(arr, l, i);
}
