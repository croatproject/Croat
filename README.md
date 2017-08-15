### About
Croat is a cryptocurrency based on the anonymous, open source CryptoNote algorithm, which has the objective of being the ALTCOIN OF THE CATALANS
More info at: <br />
http://croat.cat

## Building on Linux

Dependencies
* GCC 4.7.3 or later     (http://gcc.gnu.org/)
* CMake 2.8.6 or later   (http://www.cmake.org/)
* Boost 1.55 or later    (http://www.boost.org/)
* MSVC 2013 (Windows only)

Change to the source folder, and run `make`. 
Run `make -j<number of threads> for multithread build.
The built files will be found in `build/release/src`.

### Step by step Windows instructions:

Windows requirements install instructions

1. Install MinGW (default install) <br />
http://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download
  * Select 'msys-base' from the install options
  * Select 'msys-patch (bin)' and 'msys-zip' from All Packages
  * Select 'Apply changes' from Installation menu
2. Add msys to path by executing the following in command prompt (you must run it as admin):
    ```
    SETX PATH "%PATH%;C:\MinGW\msys\1.0\bin" /M
    ```
3. Install git <br />
http://git-scm.com/download/win
4. Download and install Microsoft Visual Studio Community 2013 for Windows Desktop:<br />
https://www.visualstudio.com/en-us/products/visual-studio-community-vs.aspx
5. Add path to .NET framework by executing the following in command prompt (you must run it as admin):
    ```
    SETX PATH "%PATH%;C:\Program Files (x86)\MSBuild\12.0\bin\amd64" /M
    ```
6. Download and install boost binaries boost_1_57_0-msvc-12.0-64.exe from http://sourceforge.net/projects/boost/files/boost-binaries into c:\local\boost_1_57_0<br />
http://sourceforge.net/projects/boost/files/boost-binaries/1.57.0/boost_1_57_0-msvc-12.0-64.exe/download
7. Set environmental variables for boost by executing the following in command prompt (you must run it as admin):
    ```
    SETX BOOST_ROOT "C:\local\boost_1_57_0" /M

    SETX BOOST_LIBRARYDIR "C:\local\boost_1_57_0\lib64-msvc-12.0" /M
    ```
8. Install the latest version of Cmake (http://www.cmake.org):<br />
Version in the time of writing:
http://www.cmake.org/files/v3.1.2/cmake-3.2.1-win32-x86.exe
9. Install Python 2.7 (http://python.org):<br />
https://www.python.org/ftp/python/2.7.9/python-2.7.9.amd64.msi

Ubuntu (tested on Ubuntu 16.04) / Mac dependencies install script:
https://github.com/forknote/cryptonote-generator/blob/master/configure.sh

```

---
This code is heavily based on ByteCoin and Forknote 
Seed source - https://github.com/amjuarez/bytecoin