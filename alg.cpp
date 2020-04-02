int cbinsearch(int *arr, int size, int value){
	int count = 0, mid = 0, l = 0, r = size - 1, key = 0;
	while (l <= r) {
		mid = (l + r) / 2;
		if (value == arr[mid]) {
			count++;
			key = mid;
			while (key > 0) {
				if (arr[key - 1] != value)
					break;
				else {
					count++;
					key--;
				}
			}
			key = mid;
			while (key < (size - 1)) {
				if (arr[key + 1] != value)
					break;
				else {
					count++;
					key++;
				}
			}
			return count;
		}
		else if (value < arr[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return count;
}
