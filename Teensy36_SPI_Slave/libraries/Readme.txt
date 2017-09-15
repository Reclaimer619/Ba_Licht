User-created libraries as of version 0017 go in a subdirectory of your default sketch directory. For example, on OSX, 
the new directory would be ~/Documents/Arduino/libraries/. On Windows, it would be My Documents\Arduino\libraries\. 
To add your own library, create a new directory in the libraries directory with the name of your library. The folder 
should contain a C or C++ file with your code and a header file with your function and variable declarations. It will 
then appear in the Sketch | Import Library menu in the Arduino IDE.

Note: for users of versions previous to 0017, libraries belong in a subdirectory of the Arduino application 
directory: ARDUINO/lib/targets/libraries. For version 0017, the libraries directory was moved to make them more convenient 
to install and use. 