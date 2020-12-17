# OpenGL + Biblioteca Glut
Eu estou usando a Biblioteca Glut porque meu interesse é fazer um jogo estilo Atari. 
Se a intenção for fazer programas, implementar recursos gráficos, você pode usar apenas o OpenGL.  
**Qual é o ponto onde eu quero chegar com esses tutoriais?**  
Isso é simples, com as facilidades de se criar um jogo hoje em dia utilizando engines,  
nós acabamos esquecendo pouco a pouco a parte lógica de resolver um problema, e isso  
nos causa preguiça mental, afetando a nossa capacidade de inventar e criar aplicações novas.

### INSTALAR O CODEBLOCKS - SE QUISER TEM NA CENTRAL DE PROGRAMAS 
sudo apt install codeblocks  
sudo apt install libxxf86vm-dev (OPCIONAL) 
sudo apt install build-essential (OPCIONAL)

### INSTALAR A BIBLIOTECA GLUT ( PELO TERMINAL )
sudo apt install freeglut3 freeglut3-dev  
sudo ln -s /usr/lib/x86_64-linux-gnu/libglut.so.3.9.0 /usr/lib/libglut.so.3.9.0  
sudo ln -s /usr/lib/x86_64-linux-gnu/libglut.so.3 /usr/lib/libglut.so.3  
sudo ln -s /usr/lib/x86_64-linux-gnu/libglut.so /usr/lib/libglut.so  

### O OPENGL NORMALMENTE JÁ VEM NO LINUX, E OS GRÁFICOS QUE VÃO SER GERADOS NORMALMENTE REQUEREM UMA PLACA DE VIDEO PARA GRÁFICOS:  

### PARA SABER SUA VERSÃO DE OPENGL É PRECISO INSTALAR O MESA-UTILS, DIGITE:
sudo apt install mesa-utils -y  

### DEPOIS VERIFIQUE A VERSÃO COM O SEGUINTE COMANDO:
glxinfo |grep "OpenGL version"  

**SAIDA DA MENSAGEM:** OpenGL version string: 4.6 (Compatibility Profile) Mesa 20.0.8  

**MATERIAL PRA CONSULTAR:**  
https://www.inf.pucrs.br/~manssour/OpenGL/Tutorial.html    

**VIDEOS Windows:**  
https://www.youtube.com/watch?v=6PZFjoEZKW0  
https://www.youtube.com/watch?v=69RKmlD7lnc  
https://www.youtube.com/watch?v=3aJ8OR1C6pk&list=PLWzp0Bbyy_3jy34HlDrEWlcG3rF99gkvk&index=1    

**VIDEOS Linux:**  
https://www.youtube.com/watch?v=DPEQHfkeY6I&list=RDCMUCKMeQtmyTrDdz6KigD3Quwg&start_radio=1  
https://www.youtube.com/watch?v=Q1C9I1qwt5Q

**PARA BAIXAR O FREEGLUT**  
https://sourceforge.net/projects/freeglut/  

**PARA BAIXAR O CODEBLOCKS**  
https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe/download  
