int factorial(int nb) 
{ 
	if(nb <= 1){
		return 0;
	}

    int res = 1, i = nb; 
	int a = 0;
    while((nb / i) != nb){

		res *=i; 
		i--;
	}
	 a = res;
	return a;
} 