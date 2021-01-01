#include <stdio.h>

int main (){
	
	long long int tc,n;
	scanf("%lld",&tc);
	for(int h=1;h<=tc;h++){
		scanf("%d",&n);
		long long int balls[n+5];
		long long int totalpossibilities = 0;
		long long int possibilities;
		for(long long int o=1;o<=n;o++){
			scanf("%lld",&balls[o]);
		}
		
		for(int k=1;k<n;k++){
			if(balls[k]!=0){
				for(int l=k+1;l<=n;l++){
				if(balls[k]==balls[l]){
				possibilities++;
				balls[l]=0;
				}
			}
		}
			
		
		if(possibilities>2){
			possibilities = (possibilities*(possibilities-1)*(possibilities-2) / 6);
			totalpossibilities = totalpossibilities + possibilities;
		}
		possibilities = 1;
	}
		printf("Case #%lld: %lld\n",h,totalpossibilities);
	}
	



	return 0;
	
}

