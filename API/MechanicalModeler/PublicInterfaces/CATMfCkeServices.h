#ifndef CATMfCkeServices_H
#define CATMfCkeServices_H
// COPYRIGHT DASSAULT SYSTEMES 2001
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h"
#include "CATICkeParm.h"
#include "CATMechanicalModeler.h"
class CATIInstance_var;
class CATCell_var;
class CATBody_var;
class CATIContainer_var; 
/**
 * Global methods to manage Knowledge object.
 */
class ExportedByCATMechanicalModeler CATMfCkeServices
{
public :
    /**
    * Retrieves the topologic cell from an object.
    * Method used to define user functions on topology inputs such as area, smart volume.
    *
    * @param iParm
    *    Value, feature or topology 
    * @return 
    *    The topologic cell. 
    *    You may get the body from it :
    *       CATICkeParm_var ckeParm=cell;
    *       CATICkeInst_var ckeInst = ckeParm->Value();
    *       CATBaseUnknown_var body=ckeInst->AsObject();
 */
   static CATBaseUnknown_var GetObjectFromParameter (const CATICkeParm_var &iParm);

    /**
    * Creates an object from a cell that can be used in KnowledgeExpert inference.
	*
    * @param oInstance  The returned object. Refer to the <tt>CATIRuleBase</tt> interface to use it in KnowledgeExpert inference.
    * @param iCell      The topological cell.
    * @param iBody      The topological body including <tt>iCell</tt>.
    * @param iContainer The specification container of the Part document. Refer to the @href CATIContainerOfDocument interface to retrieve it. 
 */
   static HRESULT CreateInstanceFromCell (CATIInstance_var& oInstance, const CATCell_var &iCell, const CATBody_var &iBody,const CATIContainer_var& iContainer  );

private:
   CATMfCkeServices();
   ~CATMfCkeServices();

};


#endif
