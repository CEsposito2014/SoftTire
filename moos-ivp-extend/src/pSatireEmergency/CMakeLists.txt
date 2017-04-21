#--------------------------------------------------------
# The CMakeLists.txt for:                       pSatireEmergency
# Author(s):                              Clayton Esposito
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

SET(SRC
  SatireEmergency.cpp
  SatireEmergency_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(pSatireEmergency ${SRC})

TARGET_LINK_LIBRARIES(pSatireEmergency
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

