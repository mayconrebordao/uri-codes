b = input()
for i in range (b):
	c = raw_input ()
	d = raw_input ()
	if (c == "ataque"):
		if(d=="ataque"):
			print("Aniquilacao mutua")
		else:
			print("Jogador 1 venceu")
	elif (c == "pedra"):
		if(d == "ataque"):
			print("Jogador 2 venceu")
		elif(d == "papel"):
			print("Jogador 1 venceu")
		elif(d == "pedra"):
			print("Sem ganhador")
	elif (c == "papel"):
		if(d == "ataque" ):
			print("Jogador 2 venceu")
		elif (d == "pedra"):
			print("Jogador 2 venceu")
		else :
			print("Ambos venceram")