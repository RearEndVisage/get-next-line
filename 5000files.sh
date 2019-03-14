#!/bin/bash

# This script opens 4 terminal windows.

i="1039"

while [ $i -lt 5000 ]
do
echo "hello" >> "test$i" &
i=$[$i+1]
done
