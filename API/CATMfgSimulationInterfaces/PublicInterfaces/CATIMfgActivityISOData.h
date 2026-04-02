/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================

#ifndef CATIMfgActivityISOData_H
#define CATIMfgActivityISOData_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3
*/

/**
* Interface implemented on the operation to manage ISO data table.<br> 
* It contains methods to add, remove and read records in the "ISO data table" (stored on the operation).
*/

#include "CATMfgSimulationItfCPP.h"

#include "CATBaseUnknown.h"

#include "CATIMfgTPSynchro.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgActivityISOData;
#else
extern "C" const IID IID_CATIMfgActivityISOData;
#endif


class ExportedByCATMfgSimulationItfCPP CATIMfgActivityISOData : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

  /**
   *   Sets the mode of management of circle used for tool path index computation.<br>
   *   @param iCircleMode
   *      The mode of management of circle used for tool path index computation
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>CATIMfgTPSynchro::Circle_OFF : each circle is seen as a set of linear motions and each point
   *            of discretization of the circle has an index value </li>
   *      <li>CATIMfgTPSynchro::Circle_ON : only one index value for the circle  </li>
   *      </ul>
   **/
	  virtual HRESULT  SetCircleMode(CATIMfgTPSynchro::CircleMode iCircleMode) = 0; 

  /**
   *   Sets the mode of management of cycle used for tool path index computation.<br>
   *   @param iCycleMode
   *      The mode of management of cycle for tool path index computation
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>CATIMfgTPSynchro::Cycle_OFF : each cycle is seen as a set of motions (linear, circular,..) 
   *              or PP instructions and each one has an index value </li>
   *      <li>CATIMfgTPSynchro::Cycle_ON : only one index value for the @href CATIMfgToolPathCycle object
   *              which describes the machining cycle.</li>
   *      </ul>
   **/
	  virtual HRESULT  SetCycleMode (CATIMfgTPSynchro::CycleMode  iCycleMode) = 0; 

  /**
   *   Adds a record in the "ISO data table".<br>
   *   @param iTPIndex
   *      The tool path index value
   *   @param iISORecord
   *      The ISO record
   **/
	  virtual HRESULT  AddISORecord (int iTPIndex,const CATUnicodeString& iISORecord) = 0; 	

  /**
   *   Retrieves the mode of management of circle used for tool path index computation.<br>
   *   @param oCircleMode
   *      The mode of management of circle used for tool path index computation
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>CATIMfgTPSynchro::Circle_OFF : each circle is seen as a set of linear motions and each point
   *            of discretization of the circle has an index value </li>
   *      <li>CATIMfgTPSynchro::Circle_ON : only one index value for the circle  </li>
   *      </ul>
   **/
	  virtual HRESULT  GetCircleMode (CATIMfgTPSynchro::CircleMode &oCircleMode) = 0; 

  /**
   *   Retrieves the mode of management of cycle used for tool path index computation.<br>
   *   @param oCycleMode
   *      The mode of management of cycle used for tool path index computation
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>CATIMfgTPSynchro::Cycle_OFF : each cycle is seen as a set of motions (linear, circular,..) 
   *              or PP instructions and each one has an index value </li>
   *      <li>CATIMfgTPSynchro::Cycle_ON : only one index value for the @href CATIMfgToolPathCycle object
   *              which describes the machining cycle.</li>
   *      </ul>
   **/
	  virtual HRESULT  GetCycleMode (CATIMfgTPSynchro::CycleMode &oCycleMode) = 0; 

  /**
   *   Retrieves the total number of records stored in the "ISO data table".<br>
   *   @param oNumberOfRecords
   *      The total number of records
   **/
	  virtual HRESULT  GetNumberOfISORecords (int &oNumberOfRecords) = 0; 

  /**
   *   Retrieves a record stored in the "ISO data table".<br>
   *   @param iNum
   *      The number of record to read
   *   @param oIndex
   *      The tool path index value relative to this record
   *   @param oString
   *      The ISO record value
   **/
	  virtual HRESULT  GetISORecord (int iNum,int& oIndex,CATUnicodeString& oString) = 0; 

  /**
   *   Unloads records in the "ISO data table".<br>
   **/
	  virtual HRESULT  UnloadISOData () = 0; 
};

CATDeclareHandler(CATIMfgActivityISOData, CATBaseUnknown) ;
#endif







