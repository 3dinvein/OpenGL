#!/usr/bin/env bash
clear
arqMain=main.cpp
programa=exe
#touch saida/$programa
#chmod +x saida/$programa
echo "Executando"
sleep 1
gcc $arqMain -o saida/$programa -lglut -lGL
./saida/$programa

