#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
void judge(char a[],char b[],int len1,int len2){
	int j;
	int jud[26]={0};
	if(len1!=len2) printf("false");
	else{
		for(int i=0;i<len1;i++){
			jud[a[i]-'a']+=1;
		}
		for(int i=0;i<len2;i++){
			jud[b[i]-'a']-=1;
		}
		for(int i=0;i<26;i++){
			if(jud[i]!=0) {
				break;
			}
			j=i;
		}
		if(j<25)
				printf("false");
				else printf("true");
	}
	
}
int main(){
	char a[100],b[100];
	gets(a);
	int len1=strlen(a);
	gets(b);
	int len2=strlen(b);
	judge(a,b,len1,len2);
	return 0;
	
}
