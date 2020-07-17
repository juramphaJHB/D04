#include <unistd.h>

int ft_fibonacci(int index){ 

	if(index >= 0){
		int n = 0;
		while(index != n){
			return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
			n++;
		}
	}else{
		return -1;
	}
	
	return 1;
} 
