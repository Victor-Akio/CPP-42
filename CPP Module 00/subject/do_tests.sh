#!/bin/bash

./tests > tests.log
comm -2 -3 <(sort tests.log) <(sort 19920104_091532.log) > diff.log
#need to find a way to separate de dates "[1323123_465456] "
#ignore it maybe
echo $(cat diff.log)