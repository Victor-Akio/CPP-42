#!/bash/sh

make re

echo "Karen Says"
echo "|----------------------------------------------------------------|"
echo "Will Karen be silent, if there is no complain?"
echo " "
./karenFilter
echo "|----------------------------------------------------------------|"
echo "A DEBUG lvl complain"
echo " "
./karenFilter DEBUG
echo "|----------------------------------------------------------------|"
echo "A INFO lvl complain"
echo " "
./karenFilter INFO
echo "|----------------------------------------------------------------|"
echo "A WARNING lvl complain"
echo " "
./karenFilter WARNING
echo "|----------------------------------------------------------------|"
echo "A ERROR lvl complain"
echo " "
./karenFilter ERROR
echo "|----------------------------------------------------------------|"
echo "Any other complain???"
echo " "
./karenFilter "Some Randon Sh\$t that karen says"
echo "|----------------------------------------------------------------|"
./karenFilter Dragon
echo "|----------------------------------------------------------------|"
echo "Maybe, if there is more than one complain at the same time."
echo " "
./karenFilter many other complains
echo "|----------------------------------------------------------------|"

make fclean