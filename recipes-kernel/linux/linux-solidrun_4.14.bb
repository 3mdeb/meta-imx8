include recipes-kernel/linux/linux-imx.inc

SUMMARY = "linux-stable 4.14.yy from SolidRun fork"
DESCRIPTION = "linux-stable 4.14.yy from SolidRun fork"

DEPENDS += "lzop-native bc-native bison-native"

SRCBRANCH = "linux-4.14.y-nxp"
SRCREV = "a33b5bfc5cc1af91ffa1ea6d0296b301808067d9"
LOCALVERSION = "-solidrun"

SRC_URI = " \
    git://github.com/SolidRun/linux-stable.git;branch=${SRCBRANCH} \
    file://defconfig \
    file://0001-Revert-arm64-dts-fsl-imx8mq-Reserve-psci-area.patch \
"

COMPATIBLE_MACHINE = "hummingboard-pulse"
