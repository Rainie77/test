#include<cstdio>
void select(int a[],int n){
	for(int i=0;i<n;i++){
		int k=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[k]) k=j;
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
}
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	select(a,10);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
