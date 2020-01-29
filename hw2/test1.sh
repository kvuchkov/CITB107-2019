#!/bin/bash
[ -f 1.cpp ] && echo "  *** COMPILE ***" && g++ 1.cpp -o 1 && echo "  ***   RUN   ***" && ./1 < 1.in.txt > 1.out.actual.txt && echo "  *** COMPARE ***" && diff 1.out.actual.txt 1.out.txt
pass=$?
echo "  *** RESULT  ***" 
echo "  ***************" 
if [ "$pass" -eq 0 ] 
then
    echo "    *  PASS   *"
else
     echo "     * FAIL *"
fi
