//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2001
//==============================================================================================================
// File: CATICloudStlAddin.h
//==============================================================================================================
// Usage:
// Define the CATICloudStlAddin interface
//==============================================================================================================
// 16-Feb-2007 - JLH - Publication
// ??-Oct-1999 - STA - Creation
//==============================================================================================================

#ifndef CATICloudStlAddin_H
#define CATICloudStlAddin_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */ 

#include "CATIWorkbenchAddin.h"
#include "ExportedByCATCloudEditorInterfaces.h"

extern ExportedByCATCloudEditorInterfaces IID IID_CATICloudStlAddin ;

/**
 * Interface for extension of STL-RapidPrototyping workbench.
 * <p>
 * @see ApplicationFrame.CATIWorkbenchAddin
 */
class ExportedByCATCloudEditorInterfaces CATICloudStlAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface ;
public:
} ;

CATDeclareHandler (CATICloudStlAddin, CATIWorkbenchAddin) ;

#endif
