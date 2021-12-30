#!/bin/bash

x=$(pidof -x $(basename $1))

if [ $x ]; then

# @TODO Substituir $x per les variables que continguin la informació.

echo "[ERROR]: Aquest script ja s’esta executant amb pid $x"

echo "[INFO]: Eliminant procés amb pid $x"
kill -9 $x

# @TODO Comanda per eliminar el procés amb pid $x, (tip: kill)

fi

# @TODO Substituir $name i $pid per les variables que continguin la informació.

name=$1
pid=$$
echo "[INFO]: Executant el script amb nom $name amb el següent pid: $pid."
./$1

 

# @TODO Fer un recubriment amb el programa $name.