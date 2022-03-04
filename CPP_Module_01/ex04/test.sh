#!/bin/bash

make re

echo "TOSS A COIN TO YOUR WITCHER!"
echo "|----------------------------------------------------------------|"
echo "Here is the Full Lyrics"
echo " "
cat ./sample.txt
echo "|----------------------------------------------------------------|"
echo "Let the butcher Burn! instead of toss a coin to your witcher?"
echo " "
./replace "./sample.txt" "Toss a coin to your Witcher" "BURN BUTCHER BUUUURNNN!!!"
echo " "
cat ./sample.txt.replace
echo "|----------------------------------------------------------------|"
echo "The full lyrics with \".\" instead of spaces"
echo " "
./replace "./toss_a_coin_full.txt" " " "."
echo " "
cat ./toss_a_coin_full.txt.replace
echo "|----------------------------------------------------------------|"

echo "Even if you want to wrong the input..."
echo " "
echo "|----------------------------------------------------------------|"
echo "Like the wrong number of input or invalid input:"
echo " no args!"
echo " "
./replace 
echo " "
echo "or maybe with one or two args... or 7:"
echo " "
./replace ./text.txt one 
echo " "
echo "and"
echo " "
./replace ./text.txt Blaa blaaaa blaaaaa blaaaaaaaaaa
echo " "
echo "Maybe, if the file does not exist?"
echo " "
./replace ./klapaussius one two
echo "|----------------------------------------------------------------|"
echo " "
echo "Something should happen if you want to change six for half-a-dozen?"
echo " "
./replace ./sample.txt "Toss" "Toss"
echo "|----------------------------------------------------------------|"

make fclean