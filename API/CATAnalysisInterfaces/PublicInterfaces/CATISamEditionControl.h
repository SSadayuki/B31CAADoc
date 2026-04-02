// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
// CATISamEditionControl.h
// Define the CATISamEditionControl interface
//===================================================================
#ifndef CATISamEditionControl_H
#define CATISamEditionControl_H
/**
  * @CAA2Level L1
  * @CAA2Usage U4    CATEAnalysisEditionControl
  */

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEditionControl ;
#else
extern "C" const IID IID_CATISamEditionControl ;
#endif

//------------------------------------------------------------------
/**
 * Interface to Customize Edition of Analysis Entity.
 * This generic commands allows to build a default user interface based on basic components for 
 * features deriving from AnalysisSet and AnalysisEntities.<br>
 * This interface allow to had some applicative control of the feature edition.
 * For example, controle liceing associated to your object.
 * By implementing this interface on your  "AnalysisFeature" late type, you are able to:
 * <ul><li>Add specific software befor the edition.</li>
 *     <li>Controle licencing associated to your object.</li></ul>
 *
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByCATAnalysisInterface CATISamEditionControl: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
	  
/**
 * Controls the feature edition.
 * @param oBoolean: 
 * <b>Legal values</b>:
 * <tt>TRUE</tt> if edition is allowed.
 * <tt>FALSE</tt> if edition is not allowed, for error management returns also E_FAIL as HRESULT.
 */
    virtual HRESULT AllowEdition(CATBoolean & oBoolean) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamEditionControl, CATBaseUnknown );

#endif
