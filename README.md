## Make

,,, 

----


## CMake

Embedded C는 Cross-compile을 지원해야한다

Cross-compile을 위해서는 다양한 옵션을 지원해야 한다

하지만, 이쁜 문법을 가진 build system은 문법을 유지하기 위해 그런 옵션을 지원하기 힘들다

Native Build system은 맘대로 옵션을 넣을 수 있으나, 구조화가 되어있지 않다

CMake가 둘 사이의 타협을 본 문법을 가진다


<br/>

Reference

https://cgold.readthedocs.io/en/latest/tutorials/workflow.html

https://gist.github.com/luncliff/6e2d4eb7ca29a0afd5b592f72b80cb5c


----

## Modern CMake  --> using OOP

Constructors 
- add_executable()
- add_library()

<br/>

Member variable


Member functions --> Member variable에 접근하기 위한 function (직접 접근불가)


- get_target_property()
- set_target_properties()
- get_property(TARGET)
- set_property(TARGET)
- target_compile_definitions()
- target_compile_features()
- target_compile_options()
- target_include_directories()
- target_link_libraries()
- target_sources()
  













