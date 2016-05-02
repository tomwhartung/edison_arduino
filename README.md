
# edison_arduino

Use this repo for work done on the edison (arduino).

## Downloads

List of files downloaded for the Intel Edison, with brief
descriptions of what they contain, whether they're installed,
whether I want to use them on an on-going basis, etc.

### Downloaded Files

downloads/arduino-1.6.8-linux64.tar.xz
	Installed into /opt/arduino

downloads/iot-devkit-prof-dev-image-edison-20160315.zip
	Unpacked into iot-devkit-prof-dev-image-edison-20160315
	Used to flash the edison (install OS)

downloads/edison-sdk-linux64-ww25.5-15.zip
	Contains:
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.manifest
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.sh

downloads/iot_web_linux64_master_3022.tgz
	Downloaded from https://software.intel.com/en-us/iot/software/ide/intel-xdk-iot-edition
	Unpacked into iot_web_linux64
	Contains version 1.6.5 of the arduino sdk

downloads/l_iot_dev_kit_2016.1.027.tar.gz
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads - "Linux Installer"
	Unpacked into l_iot_dev_kit_2016.1.027

downloads/phoneflashtoollite_5.3.2.0_linux_x86_64.deb
	Used to install phoneflashtoollite, which I used to flash the edison

downloads/xdk_web_linux64_master_3240.tgz
	Unpacked into xdk_web_linux64 (see below)
	XDK: phone apps?

### Unpacking and Installing Downloaded Files

More details about downloaded, unpacked, and possibly installed files.

edison-sdk-linux64-ww25.5-15: unzipped edison-sdk-linux64-ww25.5-15.zip
	Contains:
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.manifest
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.sh

iot-devkit-prof-dev-image-edison-20160315
	Contains image flashed to the edison by phoneflashtoollite

iot_web_linux64
	Contains version 1.6.5 of the arduino sdk (USE 1.6.8 INSTEAD)
	Installed version 1.6.5 of the arduino sdk into /opt/intel/arduino (DO NOT USE)

l_iot_dev_kit_2016.1.027
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads
	Running install_GUI.sh or install.sh updates the Edison image and installs the developer IDEs

xdk_web_linux64
	Installed XDK into /opt/intel/XDK
	This looks like it should be used to create phone apps

