int func (int arr[], int n, int k)
{
  int sum = 0, max;
  for (int i = 0; i  k; i++)
	{
	  sum += arr[i];
	}
  max = sum;
  int idx = 0;
  for (int i = k; i  n; i++)
	{
	  sum = sum + arr[i] - arr[idx];
	  idx += 1;
	  if (sum  max)
		{
		  max = sum;
		}
	}
  return max;
}