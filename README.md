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

3. Install **kandy** library as a submodule.  
  This will initialize the submodule at `lib/kandy`.   
  `git submodule add <url>`

4. Download **kandy** library files.  
  `git submodule update --init --recursive`

5. ~~Add **cmake** dependencies to your project.~~   
  Already done in **CMakeLists.txt**
  ```
  add_subdirectory(lib/kandy)
  include("${KANDY_SOURCE_DIR}/kandyConfig.cmake")
  ```

8. Update **kandy** and other submodules.   
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
