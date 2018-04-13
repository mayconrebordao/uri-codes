# -*- coding: utf-8 -*-

k = int(input())
for i in range(0,k):
	a = input();	
	b =a.split(" ")	
	nome1 = (b[0])	
	escolha1= (b[1])	
	nome2 = (b[2])	
	escolha2 = (b[3])	
	c = input()	
	d = c.split(" ")	
	n = int (d[0])	
	m = int (d[1])	
	if(escolha1 =="PAR" and (n+m)%2==0 or escolha1 =="IMPAR"and (n+m)%2!=0):
		print(nome1)
	elif (escolha2 =="PAR"and (n+m)%2==0 or escolha2 =="IMPAR"and (n+m)%2!=0):
		print(nome2)
	pass
