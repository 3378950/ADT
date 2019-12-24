int gcd(int a, int b) {
	if(a == 0) return 0;
	else return (b==0) ? a : gcd(b, a % b);
}
