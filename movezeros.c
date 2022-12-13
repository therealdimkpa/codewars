void move_zeros(size_t len, int arr[len])
{
	size_t length;
	int arr_copy[len];
	size_t lastValid = 0;

/* creates a new array that stores the non zero numbers
in their correct order */
  
	for (length = 0; length < len; length++)
		{
		if (arr[length] != 0)
			{
			arr_copy[lastValid] = arr[length];
			lastValid++;
			}
		}

/* appends zero to the empty portions of the array */
  
	for (length = lastValid; length < len; length++)
		{
		arr_copy[length] = 0;
		}
  
	for (length = 0; length < len; length++)
		{
    arr[length] = arr_copy[length];
  }
}
