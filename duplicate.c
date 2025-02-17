#include<stdio.h>
int main()
{  
  int a[20],t[20],i,n,j,temp;
  printf("Enter array size:");
  scanf("%d",&n);
  printf("Enter %d array elements:\n", n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\tBUBBLE SORTED ARRAY:\n");
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n", a[i]);
  }
 j=0;
  for(i=0;i<n-1;i++)
  {
    if(a[i]!=a[i+1])
    {
      t[j++]=a[i];
      
    }
  }
  t[j++]=a[n-1];
  for(i=0;i<j;i++)
  {
    a[i]=t[i];
  }
  printf("\t\nLINEAR SORTED ARRAY:(WITHOUT DUPLICATES)\n");
  for(i=0;i<j;i++)
  {
    printf("%d\n", a[i]);
  }
  return 0;
}
