# **Kandy C++ SMS Library Examples**
Examples for **[Kandy.io](https://www.kandy.io/)** C++ SMS API.

**Note:** The library is private. Please contact for access.  

&nbsp;

## Installation
Assumes a **git** based dependent project on **linux**, with **cmake** as the build system.

1. Install **libcurl**  
  `sudo apt-get install libcurl4-openssl-dev`

2. Install **cmake**  
  `sudo apt install cmake`

3. Clone **Kandy C++ SMS Library Examples**   
  `git clone https://github.com/aharshac/KandyCppLibExamples.git`

4. Change directory to *KandyCppLibExamples*    
  `cd KandyCppLibExamples`

5. Install **Kandy C++ SMS Library** as a submodule.  
  This will initialize the submodule at `lib/kandy`.   
  `git submodule add https://github.com/aharshac/KandyCpp.git`

6. Download **kandy** library files.  
  `git submodule update --init --recursive`

7. Add **cmake** dependencies to your project.   
  **Note:** This is done already in this project's **CMakeLists.txt**.
  ```
  add_subdirectory(lib/kandy)   
  kandy_include_dependencies()    
  ```

8. Add **Kandy** authentication data to source files.   
  Also add personal data, like phone numbers.

9. Update **Kandy C++ SMS Library** and other submodules.   
  Do this to update to the latest commits.      
  `git submodule update --recursive --remote`

&nbsp;

## Build and Run

1. Build cmake *generator*.   
  *Only once per pull or commit.*   
  `cmake -G "Unix Makefiles"`

2. Build project output.  
  `make`

3. Run examples in `bin` directory.   
  Ex: `./bin/sms_test`
