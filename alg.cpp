int cbinsearch(int *arr, int size, int value)
{
	int k = 0, s = size, middle = 0, a = 0;
	while (k < s){
		middle = (k + s - 1) / 2;
		if (arr[middle] > value)
			s = middle - 1;
		else if (arr[middle] < value)
			k = middle + 1;
		else if (arr[middle] == value)
			a++;
		break;
	}
	if (a == 1)
	{
		for (int i = 0; i < middle; i++)
		{
			if (arr[i] == value)
				a++;
		}
		for (int i = s - 1; i > middle; i--)
		{
			if (arr[i] == value)
				a++;
		}
	}
	return a;
}
