#!/bin/bash 

# @TODO x és una combinació de pidof i basename 

x=$(pidof -x $(basename $1))

if [ $x ]; then

# @TODO Substituir $x per les variables que continguin la informació.

echo "[ERROR]: Aquest script ja s’esta executant amb pid $x"
else 
echo "No hi ha cap script executan-se"

fi