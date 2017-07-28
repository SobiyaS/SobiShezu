/*Github Demo*/
#include<stdio.h>
void combine(int a[],int low,int high,int mid)
{
    int i,j,k,temp[20];
    i=k=low;
    j=mid+1;
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid) 
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    for(k=low;k<=high;k++)
    {
        a[k]=temp[k];
    }

void divide(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        divide(a,low,mid);
        divide(a,mid+1,high);
        combine(a,low,high,mid);
    }
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
int main()
{
    int ch;
    while(ch!=2)
    {
		printf("\n\tMENU\n1.Merge sort\n2.exit\t")
	case 1: Merge;
	break;
	case 2: Exit;
	return 0;
}
}
