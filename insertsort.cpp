#include<cstdio>
void insertsort(int a[],int n){
	for(int i=1;i<n;i++){
		int temp=a[i],j=i;
		while(j>0&&a[j-1]>temp){
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;
	}
}
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	insertsort(a,10);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
