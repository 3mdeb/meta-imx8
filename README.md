# BSP user manual

## Prerequisites

* Linux PC (tested on `Ubuntu 18.04 LTS`)

* [docker](https://docs.docker.com/install/linux/docker-ce/ubuntu/) installed

* [kas-docker 1.0](https://github.com/siemens/kas/blob/1.0/kas-docker) script
  downloaded and available in [PATH](https://en.wikipedia.org/wiki/PATH_(variable))

  ```bash
  wget -O ~/bin/kas-docker https://raw.githubusercontent.com/siemens/kas/1.0/kas-docker
  ```

* [meta-imx8](https://github.com/3mdeb/meta-imx8) repository cloned

  ```bash
  mkdir bsp-imx8 && cd bsp-imx8
  git clone https://github.com/3mdeb/meta-imx8.git
  ```

* [bmaptool](https://source.tizen.org/documentation/reference/bmaptool) installed

  ```bash
  sudo apt install bmap-tools
  ```

> You can also use `bmap-tools`
> [from github](https://github.com/intel/bmap-tools) if it is not available in
> your distro.

## Building

```
kas-docker build meta-imx8/kas.yml
```

## Flashing

```
sudo bmaptool copy --bmap core-image-minimal-hummingboard-pulse.wic.bmap core-image-minimal-hummingboard-pulse.wic.gz /dev/sdX
```
