/************************************************************/
/*    NAME: Clayton Esposito                                              */
/*    ORGN: MIT                                             */
/*    FILE: SatireEmergency.cpp                                        */
/*    DATE:                                                 */
/************************************************************/

#include <iterator>
#include "MBUtils.h"
#include "SatireEmergency.h"

using namespace std;

//---------------------------------------------------------
// Constructor

SatireEmergency::SatireEmergency()
{
  m_iterations = 0;
  m_timewarp   = 1;
}

//---------------------------------------------------------
// Destructor

SatireEmergency::~SatireEmergency()
{
}

//---------------------------------------------------------
// Procedure: OnNewMail

bool SatireEmergency::OnNewMail(MOOSMSG_LIST &NewMail)
{
  MOOSMSG_LIST::iterator p;
   
  for(p=NewMail.begin(); p!=NewMail.end(); p++) {
    CMOOSMsg &msg = *p;

#if 0 // Keep these around just for template
    string key   = msg.GetKey();
    string comm  = msg.GetCommunity();
    double dval  = msg.GetDouble();
    string sval  = msg.GetString(); 
    string msrc  = msg.GetSource();
    double mtime = msg.GetTime();
    bool   mdbl  = msg.IsDouble();
    bool   mstr  = msg.IsString();
#endif
   }
	
   return(true);
}

//---------------------------------------------------------
// Procedure: OnConnectToServer

bool SatireEmergency::OnConnectToServer()
{
   // register for variables here
   // possibly look at the mission file?
   // m_MissionReader.GetConfigurationParam("Name", <string>);
   // m_Comms.Register("VARNAME", 0);
	
   RegisterVariables();
   return(true);
}

//---------------------------------------------------------
// Procedure: Iterate()
//            happens AppTick times per second

bool SatireEmergency::Iterate()
{
  m_iterations++;
  return(true);
}

//---------------------------------------------------------
// Procedure: OnStartUp()
//            happens before connection is open

bool SatireEmergency::OnStartUp()
{
  list<string> sParams;
  m_MissionReader.EnableVerbatimQuoting(false);
  if(m_MissionReader.GetConfiguration(GetAppName(), sParams)) {
    list<string>::iterator p;
    for(p=sParams.begin(); p!=sParams.end(); p++) {
      string original_line = *p;
      string param = stripBlankEnds(toupper(biteString(*p, '=')));
      string value = stripBlankEnds(*p);
      
      //mission type Parameter from .moos config block
      if(param == "MissionType") {
        if(!strContainsWhite(value)) {
	missionType = value;
	handled = true;
      }
      //Temperature limit Parameter from .moos config block
      if(param == "TempLimit") {
        if(!strContainsWhite(value)) {
	 tempLimit = value;
	handled = true;
      }
      //Humidity limit Parameter from .moos config block
      if(param == "HumidLimit") {
        if(!strContainsWhite(value)) {
	humidLimit = value;
	handled = true;
      }
      //Hydrogen gas limit Parameter from .moos config block
      if(param == "HydrogenLimit") {
        if(!strContainsWhite(value)) {
	hydrogenLimit = value;
	handled = true;
      }
      //Water limit Parameter from .moos config block
      if(param == "WaterLimit") {
        if(!strContainsWhite(value)) {
	waterLimit = value;
	handled = true;
      }
    }
  }
  
  m_timewarp = GetMOOSTimeWarp();

  RegisterVariables();	
  return(true);
}

//---------------------------------------------------------
// Procedure: RegisterVariables

void SatireEmergency::RegisterVariables()
{
  // Register("FOOBAR", 0);
}

//---------------------------------------------------------
// Methods for checking message values against safety limits

void SatireEmergency::CheckTemp(double msgTemp)
{
	if (msgTemp > tempLimit)
	{
		TriggerEmergencyResponse();
	}
}

void SatireEmergency::CheckHumidity(double msgHumidity)
{
	if(msgHumidity > humidLimit)
	{
		TriggerEmergencyResponse();
	}
}

void SatireEmergency::CheckHydrogen(double msgHydrogen)
{
	if(msgHydrogen > hydrogenLimit)
	{
		TriggerEmergencyResponse();
	}
}

void SatireEmergency::CheckWater(double msgWater)
{
	if(msgwater > humidwater)
	{
		TriggerEmergencyResponse();
	}
}

//--------------------------------------------------------------
// Trigger Emegerncy Response 

void SatireEmergency::TriggerEmergencyResponse()
{
	if (missionType == "covert")
	{
		scuttle();
	}
	else
	{
		sendForRetrieval();
	}
}

//-------------------------------------------------------------------
//  Response methods

void SatireEmergency::Scuttle()
{
	printf("Emergency: Scuttle the AUV!");
}

void SatireEmergency::SendForRetrieval()
{
	printf("Emergency: Send for device retrieval!");
}
