#include<math.h>

double _stdcall discountingLongForward(
	double underlying,
	double K,
	double rate,
	double timeToMaturity)
{
double forward = underlying * (exp (rate * timeToMaturity));
double discountedLongForward = (forward - K) * (exp (-rate * timeToMaturity));
return discountedLongForward;
}