//functions math.h

==>double pow(double x, double y)
	(double pow(double x, double y) returns x raised to the power of y i.e. xy)
	//pow(2,3)=8;

==>double sqrt(double x)
	(double sqrt(double x) returns the square root of x)
	//sqrt(4)=2.0;

==>double fmod(double x, double y)
	(double fmod(double x, double y) returns the remainder of x divided by y)
	//Remainder of 8.200000 / 3 is 2.200000;
	//Remainder of 8.200000 / 5.700000 is 2.500000;
	
==>double log10(double x)
	( double log10(double x) returns the common logarithm (base-10 logarithm) of x)
	//log10(10000.000000) = 4.000000;

==>double log(double x)
	( double log(double x) returns the natural logarithm (base-e logarithm) of x)
	//log(2.700000) = 0.993252;

==>double ceil(double x)
	(double ceil(double x) returns the smallest integer value greater than or equal to x)
	//ceil(1.6)=2;
	
==>double floor(double x)
	(double floor(double x) returns the largest integer value less than or equal to x)
	//floor(1.6)=1;
	
==>double fabs(double x)
	int abs(int x)
	(double fabs(double x) returns the absolute value of x)
	//fabs(-12)=12.000000;
	//abs(12)=12;
	
==>double modf(double x, double *integer)
	(double modf(double x, double *integer) returns the fraction component (part after the decimal), and sets integer to the integer component)
	/*double x, fractpart, intpart; 
	x = 8.123456; 
	fractpart = modf(x, &intpart); 
	Integral part = 8.000000
	Fraction Part = 0.123456 */
	
==>double exp(double x)
	( double exp(double x) returns the value of e raised to the xth power)
	//exp(0)=1.000000;
	//exp(1)=2.718282;
	
==> double cos(double x) 
==> double sin(double x) 

==>float truncf(float x)
	(It returns a double value whose values after the decimal point is 0 only.)
	//trunc(3.9867)=3.000000;
