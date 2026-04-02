//==============================================================================================================
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2001
//==============================================================================================================
// File: CATICloudQsrAddin.h
//==============================================================================================================
// Usage:
// Define the CATICloudQsrAddin interface
//==============================================================================================================
// 16-Feb-2007 - JLH - Publication
// ??-May-2001 - CQO - Creation
//==============================================================================================================

#ifndef CATICloudQsrAddin_H
#define CATICloudQsrAddin_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */ 

#include "CATIWorkbenchAddin.h"
#include "ExportedByCATCloudQsrInterfaces.h"

extern ExportedByCATCloudQsrInterfaces IID IID_CATICloudQsrAddin ;

/**
 * Interface for extension of Quick Surface Reconstruction workbench.
 * <p>
 * @see ApplicationFrame.CATIWorkbenchAddin
 */
class ExportedByCATCloudQsrInterfaces CATICloudQsrAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface ;
public:
} ;

CATDeclareHandler (CATICloudQsrAddin, CATIWorkbenchAddin) ;

#endif
