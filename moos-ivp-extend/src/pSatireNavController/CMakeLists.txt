#--------------------------------------------------------
# The CMakeLists.txt for:                       pSatireNavController
# Author(s):                              Clayton Esposito
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

SET(SRC
  SatireNavController.cpp
  SatireNavController_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(pSatireNavController ${SRC})

TARGET_LINK_LIBRARIES(pSatireNavController
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

