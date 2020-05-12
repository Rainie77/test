#include<cstdio>
void bubblesort(int a[],int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	bubblesort(a,5);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
