#!/bin/bash

N=$1


decimal_expr='^-?[0-9]+([.][0-9]+)?$'

if ! [[ $N =~ $decimal_expr ]] ; then


echo "error: No és un nombre !" >&2;


exit 1

fi