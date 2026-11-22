# Monitor de Temperatura para Sala de Servidores

Projeto acadêmico desenvolvido no **Tinkercad** com Arduino Uno e sensor TMP36. O sistema monitora a temperatura simulada do ambiente, classifica a condição em três faixas e sinaliza o resultado por meio de LEDs. A temperatura e o estado identificado também são exibidos no Monitor Serial.

## Objetivo

Demonstrar uma forma simples e de baixo custo de acompanhar a temperatura de uma sala de servidores e identificar possíveis condições de superaquecimento.

## Componentes utilizados

|Componente|Quantidade|Conexão / função|
|-|-:|-|
|Arduino Uno|1|Unidade de controle do circuito|
|Sensor TMP36|1|Saída analógica no pino A0; alimentação em 5V e GND|
|LED verde|1|Pino digital D8 - condição normal|
|LED amarelo|1|Pino digital D9 - condição de atenção|
|LED vermelho|1|Pino digital D10 - condição crítica|
|Resistores limitadores de corrente|3|Um em série com cada LED|
|Protoboard e jumpers|Conforme a montagem|Interligação dos componentes|

## Lógica de funcionamento

1. O Arduino lê o valor analógico do TMP36 pelo pino A0.
2. A leitura é convertida em tensão e, em seguida, em graus Celsius, usando a relação `temperatura = (tensao - 0.5) \* 100.0`.
3. Antes de avaliar a temperatura, o programa desliga os três LEDs.
4. As estruturas condicionais selecionam o indicador correspondente:

|Faixa de temperatura|Estado|Indicador|
|-|-|-|
|Abaixo de 28 °C|Normal|LED verde|
|De 28 °C até menos de 32 °C|Atenção|LED amarelo|
|A partir de 32 °C|Crítico|LED vermelho|

O programa envia o estado e a temperatura ao Monitor Serial (9600 baud) e repete a leitura a cada segundo.

## Resultados dos testes

Os testes registrados na simulação apresentaram os seguintes valores:

|Teste|Temperatura exibida|Resultado esperado e observado|
|-|-:|-|
|Normal|24,78 °C|Estado NORMAL; LED verde|
|Atenção|29,18 °C|Estado ATENCAO; LED amarelo|
|Crítico|34,07 °C|Estado CRITICO; LED vermelho|

## Arquivo do código

O código-fonte está no arquivo [`codigo.ino`](codigo.ino), compatível com a programação do Arduino no ambiente Tinkercad.

## Link do Tinkercad

https://www.tinkercad.com/things/k0NFCqKOaZR-monitor-de-temperatura-com-arduino-uno

