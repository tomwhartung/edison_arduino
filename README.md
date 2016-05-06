
# edison_arduino

Use this repo for work done on the edison (arduino).

## Subdirectories

intel_roadshow - what got me started on all this
	Contains a bash script that I wrote hoping it would run at startup.
	This did not work but I want to keep it for future reference anyways.

my_examples - modifications to the supplied examples

## Downloads

List of files downloaded for the Intel Edison, with brief
descriptions of what they contain, whether they're installed,
whether I want to use them on an on-going basis, etc.

### Downloaded Files

downloads/arduino-1.6.8-linux64.tar.xz
	Installed into /opt/arduino

downloads/edison-mcusdk-linux64-1.0.10.zip
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads (Microcontroller (MCU) SDK -> Linux 64-bit)
	Unpacked into edison-mcusdk-linux64-1.0.10/

downloads/edison-sdk-linux64-ww25.5-15.zip
	Contains:
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.manifest
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.sh

downloads/iot-devkit-prof-dev-image-edison-20160315.zip
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads (Release 3.0 Yocto complete image)
	Unpacked into iot-devkit-prof-dev-image-edison-20160315
	Used to flash the edison (install OS)

downloads/iot_web_linux64_master_3022.tgz
	Downloaded from https://software.intel.com/en-us/iot/software/ide/intel-xdk-iot-edition
	Also available at https://software.intel.com/en-us/iot/software/ide - Intel XDK IoT Edition - Download for Linux (64-bit)
	Unpacked into iot_web_linux64
	Contains version 1.6.5 of the arduino sdk

downloads/l_iot_dev_kit_2016.1.027.tar.gz
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads - "Linux Installer"
	Also available at https://software.intel.com/en-us/iot/software/installers - Intel Edison Board Setup Tools and Installers - Linux
	Unpacked into l_iot_dev_kit_2016.1.027

downloads/iss-iot-linux_03-14-16.tar.bz2
	Downloaded from https://software.intel.com/en-us/iot/library/edison-getting-started - "Linux 64-bit"
**	This might actually contain the XDK IoT Edition?!?  Their links seem to be a bit messed up....
	Unpacked into iss-iot-linux

downloads/phoneflashtoollite_5.3.2.0_linux_x86_64.deb
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads (Flash Tool Lite Download - Linux)
	Used to install phoneflashtoollite, which I used to flash the edison

downloads/xdk_web_linux64_master_3240.tgz
	Readme for the node version of blink demo code github: https://github.com/gomobile/iotapp-template-onboard-led-blink
	  refers to https://software.intel.com/en-us/html5 - clicking on XDK takes me to
	  where this download is available, at: https://software.intel.com/en-us/intel-xdk - Download for Linux (64-bit)
	Unpacked into xdk_web_linux64 (see below)
	XDK: phone apps? WTF?!?  (Even if this is the "correct" one, I would rather not use it.)

### Unpacking and Installing Downloaded Files

More details about downloaded, unpacked, and possibly installed files.

edison-sdk-linux64-ww25.5-15: unzipped edison-sdk-linux64-ww25.5-15.zip
	Contains:
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.manifest
		poky-edison-glibc-x86_64-edison-image-core2-32-toolchain-1.7.2.sh

edison-mcusdk-linux64-1.0.10: unzipped edison-mcusdk-linux64-1.0.10.zip
**	Contains ...

iot-devkit-prof-dev-image-edison-20160315
	Contains image flashed to the edison by phoneflashtoollite

iot_web_linux64
	Contains version 1.6.5 of the arduino sdk (USE 1.6.8 INSTEAD)
	Installed version 1.6.5 of the arduino sdk into /opt/intel/arduino (DO NOT USE)

iss-iot-linux: unpacked iss-iot-linux_03-14-16.tar.bz2
**	This might actually contain the XDK IoT Edition?!?  Their links seem to be a bit messed up....

l_iot_dev_kit_2016.1.027
	Downloaded from https://software.intel.com/iot/hardware/edison/downloads
	Running install_GUI.sh or install.sh updates the Edison image and installs the developer IDEs

xdk_web_linux64
	Installed XDK into /opt/intel/XDK
	This looks like it should be used to create phone apps
	Even if this is the "correct" one, I would rather not use it.

