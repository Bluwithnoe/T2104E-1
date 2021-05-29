#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n,i,x;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{ 		
		if (i==0) 
		{
			printf("Nhap phan tu thu %d: ",i);
			scanf("%d",&arr[i]);
		}
		else 
		{
			int count=0;
			while (count==0)
			{
				printf("Nhap phan tu thu %d: ",i);
				scanf("%d",&x);
				for (int j=i-1; j>=0; j--)
				{
					if (x==arr[j])
					{
						count++;
						break;
					}
				}
				if (count>0)
				{
					printf("\nPhan tu %d da co trong mang. Moi nhap lai.\n",x);
					count=0;
				}
				else
				{
					arr[i]=x;
					break;
				}
			}
		}
	}
	printf("\nCac phan tu cua mang la: \n");
	for (i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}
