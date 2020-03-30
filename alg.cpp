int cbinsearch(int* arr, int size, int value)
{
	int count = 0;
	int i = 0, j = size, mid = (i + j) / 2;
	while (i <= j)
	{
		if (arr[mid] == value)
		{
			count++;
			break;
		}
		if (arr[mid] < value)
		{
			i = mid + 1;
			mid = (i + j) / 2;
		}
		if (arr[mid] > value)
		{
			j = mid - 1;
			mid = (i + j) / 2;
		}
	}
	int s = 1;
	while ((mid - s >= 0) && (arr[mid - s] == value))
	{
		count++;
		s++;
	}
	s = 1;
	while ((mid + s <= size) && (arr[mid + s] == value))
	{
		count++;
		s++;
	}
	return count;
}
