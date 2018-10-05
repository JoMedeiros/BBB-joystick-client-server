# BBB-joystick-client-server

Implementar um client com joystick utilizando potenciometro, LDR e push button na 
BBB e um server.

## TODO

- [] Separar os inputs em threads
  - [] Criar uma função para cada input (LDR, push button, e potenciômetro)]
  - [] Implementar um semáforo para cada thread
  - [] Tratar as prioridades
- [] Gerar inputs com a biblioteca autokey do python (serverside)
