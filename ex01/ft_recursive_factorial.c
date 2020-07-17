#include <unistd.h>

int ft_recursive_factorial(int nb){ 
	 int res = 1;

	 if (nb == 1){
		return 1;
	 }else if(nb > 1){
		return nb * ft_recursive_factorial(nb-1);
	 }else{
		return 0;
	 }
} 
  