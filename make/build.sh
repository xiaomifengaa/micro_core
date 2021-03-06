#!/bin/bash


if [ ! -d ./cmake-build-debug ]
then
    mkdir ./cmake-build-debug
fi

cd ./cmake-build-debug;

echo "cmake "
cmake DEBUG_MODE=ON  --build ../.. > ../build_cmake.log 2>&1

if [ $? -ne 0 ]
then
    echo "fail: see build_cmake.log for more details"
    exit 1
fi

echo "make micro_core"
SECONDS=0
#make -j 4 dcloud VERBOSE=1 2>&1 |tee ../build_dcloud.log
make -j 4 $1  2>&1 |tee ../build_micro_core.log | grep -v "ld: warning: direct access"

if [ ${PIPESTATUS[0]} -ne 0 ]
then
    echo "fail: see build_micro_core.log for more details"
    exit 1
fi
echo "take $SECONDS seconds to complete micro_core  building"

