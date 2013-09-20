#!/bin/bash

for i in $(seq -f "%06g" 1 999999)
do
    echo $i >> test.in
done
