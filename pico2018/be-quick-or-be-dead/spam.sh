#!/bin/bash
cnt=0

while [ $cnt -le 20 ]
do
  exec ./be-quick-or-be-dead-1
  ((cnt++))
done
