/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgTraject_H
#define CATIMfgTraject_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgToolPath.h"
#include "CATBooleanDef.h"
#include "CATMathVector.h"
#include "CATICkeParm.h"

extern IID ExportedByMfgItfEnv IID_CATIMfgTraject;

/**
* Interface to manage objects of tool path.
* <b>Role</b>: This interface offers general services on tool path <br>
*/

class ExportedByMfgItfEnv CATIMfgTraject : public CATIMfgToolPath
{
  CATDeclareInterface ;  

  public:
	/**
   *	Retrieves milling and total time, number of linear, circular and helical tool motions.
   *   @param oMillingTime 
   *	The milling time (expressed in minutes)
   *   @param oTotalTime
   *	The total time (expressed in minutes)
   *   @param oNumberOfLinearMotions
   *	The number of linear motions
   *   @param oNumberOfCircularMotions
   *	The number of circular motions
   *   @param oNumberOfHelicalMotions
   *	The number of helical motions
   *   @return
   *    Return code.
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE: Values of all the parameters are found successfully </li>
   *   <li>FALSE: Values of one or more parameters are not retrieved properly</li>
   *   </ul>
   **/
  virtual CATBoolean GetCharacteristics (double& oMillingTime,
				                         double& oTotalTime,
				                         long& oNumberOfLinearMotions,
				                         long& oNumberOfCircularMotions,
									     long& oNumberOfHelicalMotions) =0 ;

  /**
   *	Retrieves number of linear, circular and helical tool motions.
   *   @param oNumberOfLinearMotions
   *	 The number of linear motions
   *   @param oNumberOfCircularMotions
   *	 The number of circular motions
   *   @param oNumberOfHelicalMotions
   *	The number of helical motions
   *   @return
   *    Return code.
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE: Values of all the parameters are found successfully </li>
   *   <li>FALSE: Values of one or more parameters are not retrieved properly</li>
   *   </ul>
   **/
  virtual CATBoolean GetCharacteristics (long& oNumberOfLinearMotions,
				                         long& oNumberOfCircularMotions,
										 long& oNumberOfHelicalMotions) =0 ;
    
  /**
   *	Retrieves milling and total time, number of linear and circular tool motions.
   *   @param oMillingTime 
   *	The milling time (expressed in minutes)
   *   @param oTotalTime
   *	The total time (expressed in minutes)
   *   @param oNumberOfLinearMotions
   *	The number of linear motions
   *   @param oNumberOfCircularMotions
   *	The number of circular motions
   **/
  virtual CATBoolean GetCharacteristics (double& oMillingTime,
				                      double& oTotalTime,
				                      long& oNumberOfLinearMotions,
				                      long& oNumberOfCircularMotions) =0 ;

  /**
   *	Retrieves number of linear and circular tool motions.
   *   @param oNumberOfLinearMotions
   *	 The number of linear motions
   *   @param oNumberOfCircularMotions
   *	 The number of circular motions
   **/
  virtual CATBoolean GetCharacteristics (long& oNumberOfLinearMotions,
				                      long& oNumberOfCircularMotions) =0 ;


/**
 * Retrieves , if possible, a fixed tool axis from the tool path.
 * @param oHasAToolAxis
 *   A flag to indicate whether the toolpath has a tool axis or not.
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>TRUE: the toolpath has a tool axis (fixed or not) </li>
 *   <li>FALSE: the toolpath has not a tool axis </li>
 *   </ul>
 * @param oHasAFixedToolAxis
 *   A flag to indicate whether the tool axis (if found) is fixed or not.
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>TRUE: the toolpath has a fixed tool axis </li>
 *   <li>FALSE: the toolpath has a variable tool axis </li>
 *   </ul>
 * @param oToolAxis
 *   Value of tool axis if tool axis is found and fixed
 */
    virtual CATBoolean RetrievesFixedToolAxis (CATBoolean &oHasAToolAxis,
		                                    CATBoolean &oHasAFixedToolAxis,
		                                    CATMathVector &oToolAxis) = 0;

/**
 * @nodoc
 */
    virtual CATBoolean SetTemporaryRapidFeedrate (const CATICkeParm_var& iRapidFeedrate) = 0;

/**
 * @nodoc
 */
    virtual CATBoolean GetTemporaryRapidFeedrate (double& oRapidFeedrate) = 0;

};

CATDeclareHandler(CATIMfgTraject, CATIMfgToolPath);

#endif







