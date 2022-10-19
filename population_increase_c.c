#include<stdio.h>

void input(int t){
	int i;
	int pa;
	int pb;
	int j=0;
	double g1;
	double g2;
	for(i = 0; i < t; i++){
		scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
		
		while(pa <= pb){
			pa+=pa*(g1/100);
			pb+=pb*(g2/100);
			j++;		
			
			if(j > 100){
				break;
			}
		}
		
		if(j <= 100){
		
			printf("%d anos.\n",j);	
		}else{
			printf("Mais de 1 seculo.\n");
		}
		j = 0;
	}
}

int main(){
	int t;
	
	scanf("%d",&t);
	input(t);

	return 0;
}