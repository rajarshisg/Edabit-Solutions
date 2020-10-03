/*Problem - GCD and LCM ( Part 1)
  Problem Statement - Create a function that takes two numbers as arguments and returns the Greatest Common Devisor (GCD) of the two numbers.
  Problem Link - https://edabit.com/challenge/BzEQsTSmPATbsZJCR
*/
int gcd(int a, int b) {
	int min=(a<b)?a:b;
	int gcd=1;
	for(int i=1;i<=min;i++){
		if(a%i==0 && b%i==0)
			gcd=i;
	}
	return gcd;
}
