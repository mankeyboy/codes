int main()
{
	int a[5];
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		a[i] = 10 - i;
	}
	prints("Array before sorting:\n");
	for(i=0;i<5;i++)
	{
		printi(a[i]);
		prints("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	prints("Array after sorting\n");
	for(i=0;i<15;i++)
	{
		printi(a[i]);
		prints("\n");
	}
	return 0;
}