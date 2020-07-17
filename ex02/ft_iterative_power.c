#include <unistd.h>

int ft_iterative_power(int nb, int power){ 
	 int res = nb;

	 if (power == 0){
		return 1;
	 }else if(power >= 1){
		while(power > 1){
			res *= power;
			power--;
			
		}
	 }else{
		return 0;
	 }
	return res;
} 