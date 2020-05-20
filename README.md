# Welcome to CROAT 2.0

### CROAT is a cryptocurrency based on the anonymous, open source CryptoNote algorithm, which has the objective of being the ALTCOIN OF THE CATALANS!

### CROAT 2.0 is a continuation of the project started by original CROAT developers from and has been continued and updated by members of CROAT.community!
### The original CryptoNote code has been improved based on the Karbo coin code, with the necessary changes that CROAT requires, without modifying the existing CROAT BlockChain.
### Check the "ReleaseNotes" for updates and changes.
### More info at: https://croat.community

## Building CROAT 2.0 

### On *nix

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55 or later and libcurl4-openssl-dev.

CROAT 2.0 uses libcurl to connect with CROAT.community servers for verify if node is using right version. You need to install libcurl.

Ubuntu:
```
sudo apt install cmake build-essential libboost-all-dev libcurl4-openssl-dev
```

To build, change to a directory where this file is located, and run `make all`. The resulting executables can be found in `build/release/src`.

### On Windows

Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55 or later. You may download them from:

* http://www.microsoft.com/
* http://www.cmake.org/
* http://www.boost.org/

To build, change to a directory where this file is located, and run this commands: 
```
mkdir build
cd build
cmake -G "Visual Studio 12 Win64" ..
```
And then do Build.

## Running CROAT 2.0 

To running CROAT Node, you only need run "croatd" or "croat.exe" from your CROAT folder. 

If you need personal settings, we recommend make "configs" folder in the location of the executables, and create a "croat.conf" file with this minimal content:

```
# CROAT Config File

p2p-bind-port=46347
p2p-bind-ip=0.0.0.0
rpc-bind-ip=0.0.0.0
rpc-bind-port=46348
log-level=2

```
An then you can run CROAT Node:
```
Windows:   croatd.exe --config-file configs/croat.conf
Linux/Mac:   ./croatd --config-file configs/croat.conf
```

Good luck!

Special thanks to JeRKiTu & RiDD!! :)

For more info, visit: https://CROAT.community

