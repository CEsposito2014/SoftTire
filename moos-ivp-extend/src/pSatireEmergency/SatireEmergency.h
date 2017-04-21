/************************************************************/
/*    NAME: Clayton Esposito                                              */
/*    ORGN: MIT                                             */
/*    FILE: SatireEmergency.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef SatireEmergency_HEADER
#define SatireEmergency_HEADER

#include "MOOS/libMOOS/MOOSLib.h"
#include <string>

class SatireEmergency : public CMOOSApp
{
 public:
   SatireEmergency();
   ~SatireEmergency();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();
   void RegisterVariables();
   void CheckTemp(double msgTemp);
   void CheckHumidity(double msgHumid);
   void CheckHydrogen(double msgHydrogen);
   void CheckWater(double msgWater);
   void TriggerEmergencyResponse();
   void Scuttle();
   void SendForRetrieval

 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
   String       missionType;
   double       tempLimit
   double       humidLimit
   double       hygdrogenLimit
   double       waterLimit
};

#endif 
