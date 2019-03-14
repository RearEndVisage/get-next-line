#!/bin/bash

i="0"

while [ $i -lt 4999 ]
do
echo "hello" >> "test$i" &
i=$[$i+1]
done
