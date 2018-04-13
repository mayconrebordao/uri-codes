a= input();
b =a.split(" ")
n = int (b[0])
m = int (b[1])
cont = 0
f=input();
r=f.split(" ")
ter= int(r[0])
for i in range (1,m):
	if((int(r[i])-ter)>n):
		cont+=1
	elif ((ter-n)>int(r[i])):
		cont+=1
	ter=(int(r[i]))	
	#elif()
if(cont!=0):
	print("GAME OVER")
else :
	print("YOU WIN")