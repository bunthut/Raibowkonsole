# Install script for directory: /home/hyper/code/Raibowkonsole

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/hyper/code/Raibowkonsole/build/src/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/hyper/code/Raibowkonsole/build/desktop/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/hyper/code/Raibowkonsole/build/doc/manual/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/hyper/code/Raibowkonsole/build/tools/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories6" TYPE FILE FILES "/home/hyper/code/Raibowkonsole/build/konsole.categories")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/hyper/code/Raibowkonsole/build/locale")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/ca/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/ca/docs/konsole/index.docbook"
    "/home/hyper/code/Raibowkonsole/po/ca/docs/konsole/draganddrop-contextmenu.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/de/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/de/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/es/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/es/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/it/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/it/docs/konsole/index.docbook"
    "/home/hyper/code/Raibowkonsole/po/it/docs/konsole/draganddrop-contextmenu.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/nl/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/nl/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/pt/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/pt/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/pt_BR/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/pt_BR/docs/konsole/index.docbook"
    "/home/hyper/code/Raibowkonsole/po/pt_BR/docs/konsole/draganddrop-contextmenu.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/ru/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/ru/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/sl/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/sl/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sr/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/sr/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/sr/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sr@latin/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/sr@latin/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/sr@latin/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/sv/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/sv/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/tr/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/tr/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/uk/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/uk/docs/konsole/index.docbook"
    "/home/hyper/code/Raibowkonsole/po/uk/docs/konsole/draganddrop-contextmenu.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/zh_CN/konsole" TYPE FILE FILES
    "/home/hyper/code/Raibowkonsole/build/po/zh_CN/docs/konsole/index.cache.bz2"
    "/home/hyper/code/Raibowkonsole/po/zh_CN/docs/konsole/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "konsole" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/zsh/site-functions" TYPE FILE RENAME "_konsole" FILES "/home/hyper/code/Raibowkonsole/completions/konsole.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
  file(WRITE "/home/hyper/code/Raibowkonsole/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
