primes = []
for i in xrange(1,1000000):
	primes.append(i)

p = 2
while p!=1000:
	for n in xrange(p*p,1000000,p):
            primes[n-1] = 0
	p+=1
	while primes[p]==0:
		p+=1
	

def isprime(n):
    if(primes[n-1]==0):
        return("FALSE")
    else:
        return("TRUE")

n = int(raw_input())
print isprime(n)
