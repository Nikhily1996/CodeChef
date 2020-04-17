/*problem statemen:-
given two integers X and K.Determine whether there is an integer A such that
it has exactly X positive integer divisors and exactly K of them are prime numbers.
print 1 if exists
print 0 if not
input----
NumberOfTestCases
X K//of test cases
*/
#include <stdio.h>
int checkFactorsOfXIfGreaterk(int x,int k){
    int cnt = 0;
	while (x%2 == 0) 
	{ 
	    cnt++;
	    x = x / 2; 
	} 
	
	for(int i = 3 ; i <= sqrt(x) ; i += 2)
	{
	    while(x%i == 0)
	    {
	        cnt++;
	        x /= i;
	    }
	}
	
	if(x > 1) cnt++;
    if(cnt>=k)
    return 1;
    return 0;
}
int main(){
int n;
scanf("%d",&n);
int x,k,sol;
for(int i=0;i<n;i++){
    scanf("%d",&x);
    scanf("%d",&k);
    sol=checkFactorsOfXIfGreaterk(x,k);
    printf("%d\n",sol);
}
	return 0;
}
