setenv bootargs 'console=ttymxc0,115200 earlycon=ec_imx6q,0x30860000,115200 root=/dev/mmcblk1p2 rootfstype=ext4 rootwait rw panic=10'
load mmc 1:1 ${kernel_addr_r} Image
load mmc 1:1 ${fdt_addr_r} ${fdtfile}
booti ${kernel_addr_r} - ${fdt_addr_r}
