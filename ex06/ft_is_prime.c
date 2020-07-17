#include <unistd.h>

 int ft_is_prime(int nb){
	 
	 int check = 2;

	if(nb >=2){

		while(check < nb){
		 if (nb % check == 0 ){
			 return 0;
		 }else{
			 return 1;
		 }
		 check++;
	 }
	}else{
		return 0;
	}
	return 1;
 }