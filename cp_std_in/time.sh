#!/usr/bin/env bash
t=`(time -p ./app $1 < $2 > /dev/null) 2>&1`
echo $t
