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
You can also download the archive using curl or wget:
```
wget https://archive.org/download/sam-tfe-jump-fun/SE1-TFE-JumpFUN.tar.xz
```
To start the modification, use the game menu - item Modification.

Building Serious Sam Classic JumpFUN modification (for SS:TFE)
--------------------------------------------------------------

### Linux

Type this in your terminal:

```
git clone https://github.com/tx00100xt/SE1-TFE-JumpFUN.git
cd SE1-TFE-JumpFUN/Sources
./build-linux64.sh               # use build-linux32.sh for 32-bits
```
After that , libraries will be collected in the Mods and (x32 or x64) directory.   
Copy them to:   
SeriousSamClassic/SamTFE/Mods/JumpFUN/Bin, SeriousSamClassic/SamTFE/Mods/JumpFUNHD/Bin folder.

### Raspberry Pi

The build for raspberry pi is similar to the build for Linux, you just need to add an additional build key.

```
cd SE1-TFE-JumpFUN/Sources
./build-linux64.sh -DRPI4=TRUE             # use build-linux32.sh for 32-bits
```
### FreeBSD

Install bash. 
Type this in your terminal:

```
git clone https://github.com/tx00100xt/SE1-TFE-JumpFUN.git
cd SE1-TFE-JumpFUN
bash build-linux64.sh                      # use build-linux32.sh for 32-bits
```
After that , libraries will be collected in the Mods and (x32 or x64) directory.  
Copy them to:   
SeriousSamClassic/SamTFE/Mods/JumpFUN/Bin, SeriousSamClassic/SamTFE/Mods/JumpFUNHD/Bin folder.

### macOS

Type this in your terminal:

```
git clone https://github.com/tx00100xt/SE1-TFE-JumpFUN.git
cd SE1-TFE-JumpFUN
cd Sources
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j8 && make install
mkdir build-xplus
cd build-xplus 
cmake -DCMAKE_BUILD_TYPE=Release -DXPLUS=TRUE ..
make -j8 && make install
```
After that , libraries will be collected in Mods directory .  
Copy them to:   
SeriousSamClassic/SamTFE/Mods/JumpFUN/Bin, SeriousSamClassic/SamTFE/Mods/JumpFUNHD/Bin folder.

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
* `macOS`

### Build status
|CI|Platform|Compiler|Configurations|Platforms|Status|
|---|---|---|---|---|---|
|GitHub Actions|Windows, Ubuntu, FreeBSD, Alpine, Raspberry PI OS Lite, macOS|MSVC, GCC, Clang|Release|x86, x64, armv7l, aarch64, riscv64, ppc64le, s390x|![GitHub Actions Build Status](https://github.com/tx00100xt/SE1-TFE-JumpFUN/actions/workflows/cibuild.yml/badge.svg)

You can download a the automatically build based on the latest commit.  
To do this, go to the [Actions tab], select the top workflows, and then Artifacts.

License
-------

* Serious Engine v1.10 is licensed under the GNU GPL v2 (see LICENSE file).


[SE1-TFE-JumpFUN.tar.xz]: https://drive.google.com/file/d/1D9AmLPHm68T_zLQRQfe7Kyj5sJy-u3Pj/view?usp=sharing "Serious Sam Classic JumpFUN Mod"
[Visual Studio 2015 Community Edition]: https://go.microsoft.com/fwlink/?LinkId=615448&clcid=0x409 "Visual Studio 2015 Community Edition"
[Windows 10 SDK 10.0.14393.795]: https://go.microsoft.com/fwlink/p/?LinkId=838916 "Windows 10 SDK 10.0.14393.795"
[Actions tab]: https://github.com/tx00100xt/SE1-TFE-JumpFUN/actions "Download Artifacts"

