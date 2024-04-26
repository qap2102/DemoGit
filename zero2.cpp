#include <stdio.h>

void quicksort(int a[],int l,int r) 
{
    if (l<r) 
	{
        int p=a[r];
        int i=l-1;
        for(int j=l;j<r;j++) 
		{
            if (a[j]>=p) 
			{
                i++;
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        int temp=a[i+1];
        a[i+1] =a[r];
        a[r]=temp;
        int m=i+1;
        quicksort(a,l,m-1);
        quicksort(a,m+1,r);
    }
}

int main() {
    int n, i, temp;
    scanf("%d", &n);
    int a[n];
    for (i = 0;i<n;i++) 
	{
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    while (a[1]!=0)
	{
        a[0]=a[0]-a[1];
        a[1]=0;
        quicksort(a,0,n-1);
    }
    if (a[0] != 0)
	{
        printf("NO");
    } else
	{
        printf("YES");
    }
}
