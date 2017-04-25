# **Kandy C++ SMS Library Examples**

Examples for **[Kandy.io](https://www.kandy.io/)** C++ SMS Library.

&nbsp;

## Library
- [Source](https://github.com/aharshac/KandyCpp)
- [Docs](https://github.com/aharshac/KandyCpp/wiki)

&nbsp;

## Building and running examples
1. Open terminal window.

2. Install prerequisites.    
    1. Update local package lists    
    `sudo apt update`

    2. Install **libcurl**    
    `sudo apt install libcurl4-openssl-dev`

    3. Install **cmake**    
    `sudo apt install cmake`
  
3. Clone **Kandy C++ SMS Library Examples**    
`git clone https://github.com/aharshac/KandyCppLibExamples.git`

4. Change directory to *KandyCppLibExamples*    
`cd KandyCppLibExamples`

5. Install **Kandy C++ SMS Library** as a submodule.    
This will initialize the submodule at `lib/kandy`.    
`git submodule add https://github.com/aharshac/KandyCpp.git lib/kandy`

6. Download **kandy** library files.    
`git submodule update --init --recursive`

7. Add **Kandy** authentication data to source files in `src` directory.    
Also add personal data, like phone numbers.

8. Build cmake *generator*.    
*Only once per pull or commit.*    
`cmake -G "Unix Makefiles"`

9. Build project output.    
`make`

10. Run examples in `bin` directory.    
Ex: `./bin/sms_test`
