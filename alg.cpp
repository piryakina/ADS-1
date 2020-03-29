int cbinsearch(int* arr, int size, int value)
{
	int i = 0;
	int j = size - 1;
	int count = 0,index = 0;
	
	while (i <= j) {
		int mid = (i + j) / 2;
		if (arr[mid] == value) 
			index = mid;
	    if (arr[mid] > value) 
			j = mid - 1;
		else
			i = mid + 1;
	}
	while (arr[index] == value){
		count++;
		index--;
	}

	if (count!=0)
	 return count;
	else return 0;
}
