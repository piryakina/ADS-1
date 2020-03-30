int cbinsearch(int* arr, int size, int value)
{
	int i = 0;
	int j = size - 1;
	int count = 0, s = 0;

	while (i <= j) {
		int mid = i + (j - i) / 2;
		if (arr[mid] == value) {
			count++;
			s = 1;
			while (arr[mid + s] == value) {
				count++;
				s++;
			}
			s = 1;
			while (arr[mid - s] == value) {
				count++;
				s++;
			}
			return count;
		}
		if (arr[mid] < value)
			i = mid + 1;
		else j = mid - 1;
	}
	return count;
}
