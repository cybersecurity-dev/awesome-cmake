<div align="center">
    <p align="center">
        <a href="https://wikipedia.org/wiki/CMake">
          <img width="10%" src="https://github.com/cybersecurity-dev/cybersecurity-dev/blob/main/assets/CMake_Logo.svg" />
        </a>
    </p>

# **`Awesome`** [CMake](https://cmake.org/) [![Awesome](https://awesome.re/badge.svg)](https://awesome.re)
</div>

[![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)]()
[![Windows](https://custom-icon-badges.demolab.com/badge/Windows-0078D6?style=for-the-badge&logo=windows11&logoColor=white)]()
[![YouTube](https://img.shields.io/badge/YouTube-%23FF0000.svg?style=for-the-badge&logo=YouTube&logoColor=white)]()
[![Reddit](https://img.shields.io/badge/Reddit-FF4500?style=for-the-badge&logo=reddit&logoColor=white)](https://www.reddit.com/r/cmake/new/)

<p align="center">
    <a href="https://github.com/cybersecurity-dev/"><img height="25" src="https://github.com/cybersecurity-dev/cybersecurity-dev/blob/main/assets/github.svg" alt="GitHub"></a>
    &nbsp;
    <a href="https://www.youtube.com/@CyberThreatDefence"><img height="25" src="https://github.com/cybersecurity-dev/cybersecurity-dev/blob/main/assets/youtube.svg" alt="YouTube"></a>
    &nbsp;
    <a href="https://cyberthreatdefence.com/my_awesome_lists"><img height="20" src="https://github.com/cybersecurity-dev/cybersecurity-dev/blob/main/assets/blog.svg" alt="My Awesome Lists"></a>
    <img src="https://github.com/cybersecurity-dev/cybersecurity-dev/blob/main/assets/bar.gif">
</p>

## 📖 Contents
- [Getting Started with CMake](#getting-started-with-cmake)
- [Using CMake (_HelloWorld Project_)](#using-cmake-helloworld-project)
- [My Other Awesome Lists](#my-other-awesome-lists)
- [Contributing](#contributing)
- [Contributors](#contributors)

## Getting Started with [CMake](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)

* Building an Executable
* Building a Library
* Linking Together Libraries and Executables
* Subdirectories

## Using CMake (`HelloWorld Project`)

```
HelloWorld
├── include
│   └── libmath_util.hpp
├── src
│    ├── main.cpp
│    └── libmath_util.cpp
└── CMakeLists.txt
```

```bash
cd HelloWorld && \
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release && \
cmake --build build --config Release
```

```
HelloWorld
├── build
│   ├── cmake_demo
│   ├── CMakeCache.txt
│   ├── CMakeFiles/
│   ├── Makefile
│   └── cmake_install.cmake
├── include
│   └── libmath_util.hpp
├── src
│    ├── main.cpp
│    └── libmath_util.cpp
└── CMakeLists.txt
```

```bash
./build/cmake_demo
```



##

### My Other Awesome Lists
You can access the my other awesome lists [here](https://cyberthreatdefence.com/my_awesome_lists)

### Contributing
[Contributions of any kind welcome, just follow the guidelines](contributing.md)!

### Contributors
[Thanks goes to these contributors](https://github.com/cybersecurity-dev/awesome-cmake/graphs/contributors)!

[🔼 Back to top](#awesome-cmake-)
