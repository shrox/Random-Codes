a = raw_input()
b = raw_input()
c = raw_input()

a = int(a)
b = int(b)
c = int(c)

listz = []

sumpro = a + (b*c)
listz.append(sumpro)

prosum = a*(b+c)
listz.append(prosum)

propro = a*b*c
listz.append(propro)

sumpro2 = (a+b)*c
listz.append(sumpro2)

sumsum = a+b+c;
listz.append(sumsum)

print max(listz)
