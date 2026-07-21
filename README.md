👾 Código em C++ desenvolvido para o evento EsalqShow 2026, com o intuito de dismistificar a tecnologia usando o arduino, voltando o projeto ao público interno e externo
à ESALQ (de crianças à adultos). O projeto consiste na alternância de iluminação entre dois LEDs (vermelho e verde) acompanhada por emissão de frequências sonoras via buzzer.

# 💡 COMPONENTES UTILIZADOS

- Placa Arduino Uno
- Protoboard
- LED Vermelho
- LED Azul Verde
- Resistores (220Ω)
- Buzzer
- Cabos Jumpers Macho-Macho

# ❓ Como Funciona o Código

1. Primeira Etapa (Transição para o LED 1 + Som Grave)
- O código executa um laço `for` que ajusta a intensidade luminosa via PWM.
- O `LED 1` ganha brilho de forma gradual, enquanto o `LED 2` reduz seu brilho proporcionalmente (`254 - i`).
- A cada passo, o pino do buzzer aciona a função `tone()` emitindo um sinal sonoro durante um tempo específico (definido no código).
- Ao final do laço, há uma pequena pausa.

2. Segunda Etapa (Transição para o LED 2 + Som Agudo)
- Em seguida, a lógica se inverte: o `LED 2` ganha brilho e o `LED 1` se apaga.
- Desta vez, o buzzer dispara um tom mais agudo.
- Após o segundo tempo de espera, a sequência reinicia automaticamente.
