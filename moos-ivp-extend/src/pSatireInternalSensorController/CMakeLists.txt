#--------------------------------------------------------
# The CMakeLists.txt for:                       pSatireInternalSensorController
# Author(s):                              Clayton Esposito
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

SET(SRC
  SatireInternalSensorController.cpp
  SatireInternalSensorController_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(pSatireInternalSensorController ${SRC})

TARGET_LINK_LIBRARIES(pSatireInternalSensorController
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

