int cbinsearch(int *arr, int size, int value)
{
int count=0, middle, l = 0, h = size-1, key;

while (l<=h) {
	middle = (l+h)/2;
	if (value == arr[middle]) {
		count++;
		key=middle;
		while (key>0) {
		if (arr[key-1]!=value)
		break;
	else {
		count++;
		key--;
	}
}
key=middle;
while (key<size-1) {
	if (arr[v+1]!=value)
	break;
	else {
		count++;
		key++;
	}
}
return count;
}
else if (value<arr[middle])
	h = middle -1;
else
	l = middle + 1;
}
