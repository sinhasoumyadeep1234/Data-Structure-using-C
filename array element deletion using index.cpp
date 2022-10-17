/*c program to delete an array element using its index value*/

#include<stdio.h>
void del(int a[],int n);
int i,n;
int main(){
	int position;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("\nEnter the %d th element of the array:",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element's position that is to be deleted:");
	scanf("%d",&position);
	del(a,position);
}
void del(int a[],int position){
	int j,item;
	item=a[position];		/*taking the element from its index value*/
	for(j=position;j<n;j++){
		a[j]=a[j+1];		/*swapping the item with other elements*/
	}
	n=n-1;				/*reducing the array size*/
	printf("\nArray after deletion is\n");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}
