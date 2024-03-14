#include<stdio.h>
void main()
{
	int arr[100],i,n,rollno,count=0;
	printf("Number of students attended:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number:");
	scanf("%d",&rollno);
	for(i=0;i<n;i++)
	{
		if(arr[i]==rollno)
		{
			printf("Attended for the exam");
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("Absent for the exam");
	}
}
