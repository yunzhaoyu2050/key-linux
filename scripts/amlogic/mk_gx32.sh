#! /bin/bash

export CROSS_COMPILE=/opt/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-

make ARCH=arm meson64_a32_defconfig
make ARCH=arm  -j16 uImage  || echo "Compile Image Fail !!"

./scripts/amlogic/mk_32dtb.sh
