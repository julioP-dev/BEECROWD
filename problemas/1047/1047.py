hora_inicial, minuto_inicial, hora_final, minuto_final = map(int, input().split())

inicio = hora_inicial *60 + minuto_inicial

fim = hora_final*60 + minuto_final

if(fim <= inicio):
    fim += 24*60
    
duracao = fim - inicio

dura_hr = int(duracao /60)
dura_min = int(duracao%60)

print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(dura_hr,dura_min))