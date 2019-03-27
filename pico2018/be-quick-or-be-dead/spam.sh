#!/bin/bash
cnt = 0;

while [ $cnt -le 20 ]
do
  ./be-quick-or-be-dead
  ((cnt++))
done
