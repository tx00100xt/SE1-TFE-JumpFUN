## Serious Sam Classic JumpFUN
![Build status](https://github.com/tx00100xt/SE1-TFE-JumpFUN/actions/workflows/cibuild.yml/badge.svg)
[![License: GPL v2](https://img.shields.io/badge/License-GPL_v2-blue.svg)](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html)
![GitHub release (latest by date)](https://img.shields.io/github/v/release/tx00100xt/SE1-TFE-JumpFUN)

What is JumpFUN?  
This is a modification for Serious Sam Classic The First Encounter.  
This mod required https://github.com/tx00100xt/SeriousSamClassic or https://github.com/tx00100xt/SeriousSamClassic-VK to run.  
erious Sam Classic JumpFUN was created by fans of the game Serious Sam Classic and is distributed for free.    
* Serious Engine v1.10 is licensed under the GNU GPL v2 (see LICENSE file).


![JumpFUN](https://raw.githubusercontent.com/tx00100xt/SE1-TFE-JumpFUN/main/Images/jumpfun-1.png)

![JumpFUN](https://raw.githubusercontent.com/tx00100xt/SE1-TFE-JumpFUN/main/Images/jumpfun-2.png)


Download [SE1-TFE-JumpFUN.tar.xz] archive and unpack to  SeriousSamClassic/SamTFE/ directory.
To start the modification, use the game menu - item Modification.

Building Serious Sam Classic Parse Error modification (for SS:TFE)
------------------------------------------------------------------

### Linux

Type this in your terminal:

```
git clone https://github.com/tx00100xt/SE1-SE1-TFE-JumpFUN.git
cd SE1-TFE-JumpFUN/Sources
./build-linux64.sh -DTFE=TRUE              # use build-linux32.sh for 32-bits
./build-linux64xplus.sh -DTFE=TRUE         # use build-linux32xplus.sh for 32-bits
```
After that , libraries will be collected in the x32 or x64 directory . 
Copy them to SeriousSamClassic/SamTFE/Mods/JumpFUN/Bin, SeriousSamClassic/SamTFE/Mods/JumpFUNHD/Bin folder.

### Gentoo

To build a game for gentoo, use a https://github.com/tx00100xt/serioussam-overlay containing ready-made ebuilds for building the game and add-ons.

### Arch Linux

To build a game under Arch Linux you can use the package from AUR: https://aur.archlinux.org/packages/serioussam

### Raspberry Pi

The build for raspberry pi is similar to the build for Linux, you just need to add an additional build key.

```
cd SE1-TFE-JumpFUN/Sources
./build-linux64.sh -DTFE=TRUE -DRPI4=TRUE             # use build-linux32.sh for 32-bits
./build-linux64xplus.sh -DTFE=TRUE -DRPI4=TRUE        # use build-linux32xplus.sh for 32-bits
```
### FreeBSD

Install bash. 
Type this in your terminal:

```
git clone https://github.com/tx00100xt/SE1-TFE-JumpFUN.git
cd SE1-TFE-JumpFUN
bash build-linux64.sh -DTFE=TRUE                     # use build-linux32.sh for 32-bits
bash build-linux64xplus.sh -DTFE=TRUE                # use build-linux32xplus.sh for 32-bits
```
After that , libraries will be collected in the x32 or x64 directory . 
Copy them to SeriousSamClassic/SamTFE/Mods/JumpFUN/Bin, SeriousSamClassic/SamTFE/Mods/JumpFUNHD/Bin folder.

Windows
-------
* This project can be compiled starting from Windows 7 and higher.

1. Download and Install [Visual Studio 2015 Community Edition] or higher.
2. Download and Install [Windows 10 SDK 10.0.14393.795] or other.
3. Open the solution in the Sources folder, select Release x64 or Release Win32 and compile it.

Supported Architectures
----------------------
* `x86`
* `aarch64`
* `e2k` (elbrus)

Supported OS
-----------
* `Linux`
* `FreeBSD`
* `Windows`
* `Raspberry PI OS`

License
-------

* Serious Engine v1.10 is licensed under the GNU GPL v2 (see LICENSE file).


[SE1-TFE-JumpFUN.tar.xz]: https://drive.google.com/file/d/1D9AmLPHm68T_zLQRQfe7Kyj5sJy-u3Pj/view?usp=sharing "Serious Sam Classic JumpFUN Mod"
[Visual Studio 2015 Community Edition]: https://go.microsoft.com/fwlink/?LinkId=615448&clcid=0x409 "Visual Studio 2015 Community Edition"
[Windows 10 SDK 10.0.14393.795]: https://go.microsoft.com/fwlink/p/?LinkId=838916 "Windows 10 SDK 10.0.14393.795"

