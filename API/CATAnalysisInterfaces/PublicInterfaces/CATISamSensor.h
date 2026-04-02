// COPYRIGHT Dassault Systemes 2000
//===================================================================
//
// CATISamSensor.h
// Define the CATISamSensor interface
//
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//===================================================================
#ifndef CATISamSensor_H
#define CATISamSensor_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamSensor ;
#else
extern "C" const IID IID_CATISamSensor ;
#endif

class CATICkeRelation;

/**   
 * Interface dedicated to analysis measure management.
 * <b>Role</b>: An analysis measure is the analysis feature that gives access to the 
 * Analysis sensors. It manages is an oriented link between parameters.<br>
 * It manages the propagation of input modifications to outputs.<br>
 * This interface allows to retrieve the relation that manages this.
 * @see CATICkeRelation
 */
class ExportedByCATAnalysisInterface CATISamSensor: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
  * Retrieve the relations that manage the parameters dependancie that defines the sensor. 
  * @param opiRelation [out , CATBaseUnknown#Release]
  * CATICkeRelation object.
  */
    virtual HRESULT GetRelation(CATICkeRelation*& opiRelation) = 0;
 /**
  * Retrieve the Sensor is defined by the use of a Relation. 
  * @return
  * <br><b>Legal values</b>: 
  * <ul>
  * <li><font color="red">TRUE</font color="red"> The feature is defined with a relation. <br>
  *  Use @href CATISamSensor#GetRelation to extract parameters.</li>
  * <li><font color="red">FALSE</font color="red"> The feature is not defined with a relation.  <br>
  *  Use @href CATISamSensor#GetOutputParameters to extract parameters.</li>
  * </ul>
  */
    virtual CATBoolean IsDefinedWithRelation() = 0;

 /**
  * Retrieve the identifer of the sensor.
  * @return oIdentifier the identifer of the sensor.

  */
    virtual CATUnicodeString GetIdentifer() = 0;
 /**
  * Retrieve the Output parameters that are defined by a sensor.
  * @param oParameters  pointer on the list of output parameters.
  */
    virtual HRESULT GetOutputParameters(CATLISTV(CATBaseUnknown_var)* &oParameters) = 0;

 /**
  * Sets the Output parameters that are defined by a sensor.
  * @param iParameters  pointer on the list of output parameters.
  */
    virtual HRESULT SetOutputParameters(const CATLISTV(CATBaseUnknown_var) &iParameters) = 0;

 /**
  * Removes the Output parameters that are defined by a sensor.
  */
    virtual HRESULT RemoveAllOutputParameters() = 0;


};
CATDeclareHandler(CATISamSensor,CATBaseUnknown);

//------------------------------------------------------------------

#endif
