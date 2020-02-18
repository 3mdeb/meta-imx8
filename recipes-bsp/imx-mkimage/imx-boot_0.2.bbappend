# do_compile_prepend_hummingboard-pulse() {
#     export dtbs="fsl-imx8mq-hummingboard-pulse.dtb"
# }
#
do_compile_prepend_hummingboard-pulse() {
    mkdir -p ${BOOT_STAGING}/scripts/dtc
    cp ${WORKDIR}/recipe-sysroot-native/usr/bin/dtc ${BOOT_STAGING}/scripts/dtc
}
