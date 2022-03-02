#!/bin/bash
cat /etc/passwd | sed '/^#/d' | sed -n "n;p" | rev | sort -r | awk 'NR>=ENVIRON["FT_LINE1"] && NR<=ENVIRON["FT_LINE2"]' | sed 's/.*://' | tr "\n" "," | sed 's/,/, /g' | sed 's/, $/./'
