/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

// COPYRIGHT Dassault Systemes 2006
//===================================================================
//
// CATIMldTechRes.h
// Define the CATIMldTechRes interface
//
//===================================================================
//
// Usage notes:
//   Interface to manage a Technological Result
//
//===================================================================

#ifndef CATIMldTechRes_H
#define CATIMldTechRes_H

#include "CATMldTechnoResultItfCPP.h"
#include "CATBaseUnknown.h"

//NewTopologicalObject
#include "ListPOfCATFace.h"
//System
#include "CATCollec.h"
//ObjectModelerBase 
#include "sequence_CATBaseUnknown_ptr.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATITerTechResToPropagate;
class CATMathAxis;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMldTechnoResultItfCPP IID IID_CATIMldTechRes;
#else
extern "C" const IID IID_CATIMldTechRes ;
#endif

/**
* Interface representing a Technological Result 
*/
class ExportedByCATMldTechnoResultItfCPP CATIMldTechRes: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


    /**   
    *	  Retrieves the faces of the Technological Result 
    *	  @param
    *		 oListFaces: the faces retrieved
    *   @return
    * An <tt>HRESULT</tt> value.
    * <br><b>Legal values</b>:
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
    * <dt> <tt>S_FALSE</tt>  <dd> No parameters.
    * <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
    * </dl>
    */
	  virtual HRESULT GetFaces( CATLISTP(CATFace)& oListFaces)  = 0;

    /**   
    *	  Retrieves the axis of the Technological Result 
    *	  @param
    *		 ioMathAxis: the axis retrieved
    *   @return
    * An <tt>HRESULT</tt> value.
    * <br><b>Legal values</b>:
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
    * <dt> <tt>S_FALSE</tt>  <dd> No parameters.
    * <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
    * </dl>
    */
	  virtual HRESULT GetAxis(CATMathAxis&  ioMathAxis)  = 0;

    /**
    * Retrieves the Knowledgeware Parameters related to the Technological Result.
    * @param 
	*		oListOfParameters: the list of the Knowledgeware Parameters
    *       WARNING: These knowledgeware parameters are Volatile and MUST NOT be referenced by any other feature. You MUST NOT use them to create any knowledgeware relations and/or formulas.
    * @return
    * An <tt>HRESULT</tt> value.
    * <br><b>Legal values</b>:
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
    * <dt> <tt>S_FALSE</tt>  <dd> No parameters.
    * <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
    * </dl>
    */
    virtual HRESULT GetParameters(CATLISTV(CATBaseUnknown_var)& oListOfParameters)  = 0;
   
};

CATDeclareHandler( CATIMldTechRes, CATBaseUnknown );
//------------------------------------------------------------------

#endif
