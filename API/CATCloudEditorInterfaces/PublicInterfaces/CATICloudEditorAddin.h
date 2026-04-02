//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 1999
//==============================================================================================================
// File: CATICloudEditorAddin.h
//==============================================================================================================
// Usage:
// Define the CATICloudEditorAddin interface
//==============================================================================================================
// 16-Feb-2007 - JLH - Publication
// ??-Oct-1999 - STA - Creation
//==============================================================================================================

#ifndef CATICloudEditorAddin_H
#define CATICloudEditorAddin_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */ 

#include "CATIWorkbenchAddin.h"
#include "ExportedByCATCloudEditorInterfaces.h"

extern ExportedByCATCloudEditorInterfaces IID IID_CATICloudEditorAddin ;

/**
 * Interface for extension of Digitized Shape Editor workbench.
 * <p>
 * @see ApplicationFrame.CATIWorkbenchAddin
 */
class ExportedByCATCloudEditorInterfaces CATICloudEditorAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface ;
public:
} ;

CATDeclareHandler (CATICloudEditorAddin, CATIWorkbenchAddin) ;

#endif
