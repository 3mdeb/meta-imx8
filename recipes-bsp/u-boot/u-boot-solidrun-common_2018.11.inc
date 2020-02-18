# Copyright (C) 2012-2018 O.S. Systems Software LTDA.
# Released under the MIT license (see COPYING.MIT for the terms)
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=30503fd321432fc713238f582193b78e"

require recipes-bsp/u-boot/u-boot.inc

DEPENDS += "bison-native"

PROVIDES += "u-boot"

SRC_URI = "git://github.com/SolidRun/u-boot.git;branch=${SRCBRANCH}"

SRCREV = "445de00964bcfcf4b6ae3dd415e57f02bca9b37b"
SRCBRANCH = "v2018.11-solidrun-1gb"

PV = "v2018.11-solidrun-1gb+git${SRCPV}"

S = "${WORKDIR}/git"

COMPATIBLE_MACHINE = "(mx8)"
