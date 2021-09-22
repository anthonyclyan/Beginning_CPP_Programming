# Installing VSCode on Mac OSX

- Navigate to [Visual Studio Code](https://code.visualstudio.com/)
- Download latest version (*I am using --Version: 1.60.1*)
    - Open with **Archive Utility**
- Drag **Visual Studio Code** into **Applications folder**

## Installing Extensions

1. C/C++
    p.s. This [link](https://code.visualstudio.com/docs/languages/cpp#_install-the-extension) could be more useful.
    - Launch VSCode
    - Select the Extensions view icon, bottom, on the Activity bar, on the far left
    - Search for `c++`
    - Select the one supported by Microsoft (purple circle) and `install`
2. CodeLLDB
    - Search for `codelldb`
    - Select the only one supported by Vadim Chugunov and `install`

# Building and Running C++ Programs with VSCode on Mac OSX

## Configure json files
- Launch VSCode
- Select `Open Folder` 
- Select the folder where you want to edit and compile your C++ codes
- Copy below codes and save file as `main.cpp` for example

```c++
#include <iostream>
using namespace std;

int main() {
    cout << "Hello!" << endl;
    return 0;
}
```

- Select `View` at the Mac menu Bar, then `Command Palatte...`
- Select `C/C++: Edit Configurations (UI)`
- Modify **Compiler path** by clicking on the drop down arrow and select `/usr/bin/g++`
- Modify **C++ standard** to `c++20`
- Save... Notice `.vscode` > `c_cpp_properties.json` is automatically generated on the Activity bar

VSCode require the `.cpp` file to be selected prior building it

- Select the `main.cpp` just created
- Select `Terminal` at the Mac menu Bar, then `Configure Default Build Task...`
- Select `C/C++: g++ build active file`
- A new file, `tasks.json`, is automatically generated, which contains information on how to build C++ projects
- Modify line 8 - 13 as below:

```json
"args": [
	"-g",
	"-Wall",										// to generate all warnings
	"-std=c++20",									// use c++20 standard
	// "${file}",
	"${fileDirname}/*.cpp",							// compile all c++ files
	"-o",
	"${fileDirname}/${fileBasenameNoExtension}"
],
```

## Building C++ programs

- Select `main.cpp` and let's compile the code
- Select `Terminal` at the Mac menu bar, then `Run Build Task...`
- Terminal should automatically appear towards the bottom and expected output 

```c++
> Executing task: C/C++: g++ build active file <

Starting build...
/usr/bin/g++ -g -Wall -std=c++20 /Users/.../*.cpp -o /Users/.../main
Build finished successfully.

Terminal will be reused by tasks, press any key to close it.
```

- Notice `Build finished successfully` then the `main` executable file is created on the Activity bar

## Running C++ Programs

- Right click on the `main` executable file and select `Open in Integrated Terminal`
- The terminal will then open at the proper file path, and input command `ls` will list the directories under the file path. The expected output is

```
main      main.cpp        main.dSYM
```

- To **run** or **execute** the file, input command `./main`

## Running multiple C++ programs
According to my file structure, which I have `test1` and `test2` directory with respective `.cpp` files, this is to avoid build error 

``
clang: error: no such file or directory: 'test2.cpp'
clang: error: no input files
``

Despite the `.cpp` file name is different, I learned that there will be buile errors if `tes1.cpp` and `test2.cpp` are in the same directory during build.