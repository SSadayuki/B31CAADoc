/* -*-c++-*- */
#ifndef CATIStructureAnalyse_h
#define CATIStructureAnalyse_h
//-----------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 1998  
//-----------------------------------------------------------------------------
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
// 
// This is the CATIStructureAnalyse interface
//

#include "AC0SPBAS.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
class CATListValCATBaseUnknown_var;

extern ExportedByAC0SPBAS IID IID_CATIStructureAnalyse ;

/**  
 * Interface used to calculate the impacts of a delete operation in a Cut/Copy/Paste context.
 */

class ExportedByAC0SPBAS CATIStructureAnalyse : public CATBaseUnknown
{
  CATDeclareInterface;

  public:
 
 /**  
   * Retrieves all the parents of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list of all the parents of the current object.
   */
  virtual void AnalyseParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;

 /**  
   * Retrieves the direct the parents of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list the direct parents of the current object.
   */
  virtual void AnalyseDirectParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;
  
 /**  
   * Retrieves all the children of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list of all the children of the current object.
   */
 
  virtual void AnalyseChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;

 /**  
   * Retrieves the direct children of the current object.
   * @param iIntfName
   *     Name of the interface filtering the kind of objects to be returned.
   * @param oList
   *     The list of the direct the children of the current object.
   */
  virtual void AnalyseDirectChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList)=0;

};

CATDeclareHandler(CATIStructureAnalyse,CATBaseUnknown);

#endif 
