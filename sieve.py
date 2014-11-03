primes = []
for i in xrange(2,1000000000000):
	primes.append(i)

p = 2
while p!=1000000:
	for n in xrange(p*p,100,p):
		if n in primes:
			primes[primes.index(n)] = 0
	p+=1
	
def isprime(integer):
	if integer in primes:
		return True
	else:
		return False

n = int(raw_input())
print isprime(n)


