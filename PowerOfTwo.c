bool isPowerOfTwo(int n) {
    int i = 0;
    int a = 1;
    if(a < 0)
    {
    	a = ~(a - 1);
    }
    for(;;)
    {
    	if(n == a)
    	{
    		return true;
    	}
    	a = a<<1;
		if(a == 0x80000000)
    	{
    		return false;
    	}
    }
}