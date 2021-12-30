#!/bin/bash

cat > act10.data << 'EOT'

102

71

210

153

EOT

clear

cat act10.data

declare -i SUM=0

while read X; do

SUM+=$X

done < act10.data

echo "Suma: $SUM != 536"

#Ja que no hi ha cap funció que li indica que al número 71 hi ha un 'leading zero', per tant
#la màquina ho interpreta malament. Una de les solucions seria llevar-li el zero al introduir
#els nombres a la data.