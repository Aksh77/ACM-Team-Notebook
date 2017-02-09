int max_sub(int a[],int n)
{
  int max_ending_here,max_so_far;
  max_ending_here=max_so_far=a[0];
  for(int i=0;i<n;i++)
  {
    max_ending_here=max(0,max_ending_here+a[i]);
    max_so_far=max(max_so_far,max_ending_here);
  }
  return max_so_far;
}
