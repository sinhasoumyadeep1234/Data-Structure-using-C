/*Insert an element inside an array using index*/

#include<stdio.h>
void insert(int a[],int,int,int);
int i,n,position,item;
int main(){
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("\nEnter the %d th element of the array:",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be inserted:");
	scanf("%d",&item);
	printf("\nEnter the element's position where is is to be inserted:");
	scanf("%d",&position);
	insert(a,n,item,position);
}
void insert(int a[],int n,int item,int position){
	for(i=n;i>=position;i--){						/*running backward loop form array length to elements position*/
		a[i+1]=a[i];								/*shifting down by 1*/
		
	}
	a[position]=item;				/*placing the item in its position*/
	if(position>n){					/*if index of the new element is greater the array size the increase the size of the array*/
		printf("\nWe are increasing the array size and then placing the element");
	}
	n++;
	printf("\nArray after insertion\n");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}