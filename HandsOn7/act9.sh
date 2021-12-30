#!/bin/bash

x=$(pidof -x $(basename $2))

if [ $x ]; then

echo "[ERROR]: Aquest script ja s’esta executant amb pid $x"
exit 0

fi 

if ! [[ $1 && $2 ]]; then

echo "[ERROR]: No s'han passat 2 arguments"

fi

if ! [ $1 >> 0 ]; then

echo "[ERROR]: El nombre de procesos és més petit que 1"

fi

if ! [ -f $2 ]; then

echo "[ERROR]: No existeix cap fitxer executable amb aquest nom"

fi

chmod +x $2





