#!/bash/sh

make re

echo "Karen Says"
echo "|----------------------------------------------------------------|"
echo "Will Karen be silent, if there is no complain?"
echo " "
./karen
echo "|----------------------------------------------------------------|"
echo "A DEBUG lvl complain"
echo " "
./karen DEBUG
echo "|----------------------------------------------------------------|"
echo "A INFO lvl complain"
echo " "
./karen INFO
echo "|----------------------------------------------------------------|"
echo "A WARNING lvl complain"
echo " "
./karen WARNING
echo "|----------------------------------------------------------------|"
echo "A ERROR lvl complain"
echo " "
./karen ERROR
echo "|----------------------------------------------------------------|"
echo "Any other complain???"
echo " "
./karen DRAGON
echo "|----------------------------------------------------------------|"
echo "Maybe, if there is more than one complain at the same time."
echo " "
./karen many other complains
echo "|----------------------------------------------------------------|"

make fclean