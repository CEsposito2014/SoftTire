#--------------------------------------------------------
# The CMakeLists.txt for:                       pSatireExternalSensorController
# Author(s):                              Clayton Esposito
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

SET(SRC
  SatireExternalSensorController.cpp
  SatireExternalSensorController_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(pSatireExternalSensorController ${SRC})

TARGET_LINK_LIBRARIES(pSatireExternalSensorController
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

